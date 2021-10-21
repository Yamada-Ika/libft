/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:45:58 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/21 17:26:53 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// -- test code --
// #include <stdio.h>

// int main(void)
// {
//     char    ft_s[] = "12345";
// 	char    s[] = "12345";
// 	int		len = 5;
//     size_t  n;

// 	n = 3;
// 	printf("n = %zu\n", n);

// 	printf("before ft_bzero : \n");
// 	for (int i = 0; i < len; i++)
// 		printf("%02x ", ft_s[i]);
// 	putchar('\n');
//     ft_bzero(ft_s, n);
// 	printf("after ft_bzero  : \n");
// 	for (int i = 0; i < len; i++)
// 		printf("%02x ", ft_s[i]);
// 	putchar('\n');

// 	printf("before bzero : \n");
// 	for (int i = 0; i < len; i++)
// 		printf("%02x ", s[i]);
// 	putchar('\n');
//     bzero(s, n);
// 	printf("after bzero  : \n");
// 	for (int i = 0; i < len; i++)
// 		printf("%02x ", s[i]);
// 	putchar('\n');
// }
