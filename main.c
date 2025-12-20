/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <hiono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 11:57:35 by hiono             #+#    #+#             */
/*   Updated: 2025/12/20 12:21:46 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <printf.h>
#include <string.h>

int ft_strlen(const char *);

void main()
{
	const char * words = "Hello World!";
	int res = ft_strlen(words);
	int org_res = strlen(words);
	printf("result: %d\n", res);
	printf("result: %d\n", org_res);

	return;
}
