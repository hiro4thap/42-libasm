/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 11:57:35 by hiono             #+#    #+#             */
/*   Updated: 2025/12/24 19:11:37 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <printf.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *src);
char 	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_write(int fd, const void *buf, size_t count);
size_t	ft_read(int fd, void *buf, size_t count);
char	*ft_strdup(const char *s);

void	test_ft_strlen(size_t callback(const char *))
{
	const char *str01 = "Hello World!";
	printf("src: \"%s\" -> return: %zu\n", str01, callback(str01));
	const char *str02 = "this is a sample sentence for strlen";
	printf("src: \"%s\" -> return: %zu\n", str02, callback(str02));
	const char *str03 = "";
	printf("src: \"%s\" -> return: %zu\n", str03, callback(str03));

	//ERROR (seg fault)
	//const char *str04 = NULL;
	//printf("src: NULL -> return: %zu\n", callback(str04));
}

void	test_ft_strcpy(char * callback(char *, const char *))
{
	char *dest01 = calloc(8, 1);
	char *dest02 = calloc(10, 1);
	char *dest03 = calloc(12, 1);
	const char *src = "abcdefghie";

	printf("src: %s\n", src);
	char *res01 = callback(dest01, src);
	printf("dest: \"%s\", return: \"%s\"\n", dest01, res01);
	char *res02 = callback(dest02, src);
	printf("dest: \"%s\", return: \"%s\"\n", dest02, res02);
	char *res03 = callback(dest03, src);
	printf("dest: \"%s\", return: \"%s\"\n", dest03, res03);

	//ERROR (seg fault)
	//callback(NULL, "abc");
	//callback(dest03, NULL);

	free(dest01);
	free(dest02);
	free(dest03);
}

void	test_ft_strcmp(int callback(const char *, const char *))
{
	const char *s1 = "abcde";
	const char *s2 = "abcde";
	const char *s3 = "abdde";
	const char *s4 = "abcdE";
	const char *s5 = "abcd";
	const char *s6 = "abcdef";
	int res01 = callback(s1, s2);
	printf("s1: \"%s\", s2: \"%s\" -> return: %d\n", s1, s2, res01);
	int res02 = callback(s1, s3);
	printf("s1: \"%s\", s2: \"%s\" -> return: %d\n", s1, s3, res02);
	int res03 = callback(s1, s4);
	printf("s1: \"%s\", s2: \"%s\" -> return: %d\n", s1, s4, res03);
	int res04 = callback(s1, s5);
	printf("s1: \"%s\", s2: \"%s\" -> return: %d\n", s1, s5, res04);
	int res05 = callback(s1, s6);
	printf("s1: \"%s\", s2: \"%s\" -> return: %d\n", s1, s6, res05);

	//ERROR (seg fault)
	//callback(s1, NULL);
	//callback(NULL, s1);
}

int main()
{
	//printf("------ft_strlen------\n");
	//test_ft_strlen(ft_strlen);
	//printf("------strlen------\n");
	//test_ft_strlen(strlen);
	//printf("\n");

	//printf("------ft_strcpy------\n");
	//test_ft_strcpy(ft_strcpy);
	//printf("------strcpy------\n");
	//test_ft_strcpy(strcpy);
	//printf("\n");

	printf("------ft_strcmp------\n");
	test_ft_strcmp(ft_strcmp);
	printf("------strcmp------\n");
	test_ft_strcmp(strcmp);
	
	return 0;
}
