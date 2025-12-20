/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 11:57:35 by hiono             #+#    #+#             */
/*   Updated: 2025/12/20 18:31:02 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <printf.h>
#include <string.h>

size_t	ft_strlen(const char *src);
char 	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_write(int fd, const void *buf, size_t count);
size_t	ft_read(int fd, void *buf, size_t count);
char	*ft_strdup(const char *s);

int test_ft_strlen(size_t callback(const char *))
{
	const char *str01 = "Hello World!";
	printf("src: \"%s\" -> return: %zu\n", str01, callback(str01));
	const char *str02 = "this is a sample sentence for strlen";
	printf("src: \"%s\" -> return: %zu\n", str02, callback(str02));
	const char *str03 = "";
	printf("src: \"%s\" -> return: %zu\n", str03, callback(str03));
	//const char *str03 = NULL;
	//printf("src: NULL -> return: %zu\n", callback(str03));
	return 0;
}

int main()
{
	printf("------ft_strlen------\n");
	test_ft_strlen(ft_strlen);
	printf("------strlen------\n");
	test_ft_strlen(strlen);

	return 0;
}
