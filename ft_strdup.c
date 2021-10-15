/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:57 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/15 20:49:24 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s1[] = "hello", *s2, *ft_s2;
// 	int len = 6;

// 	s2 = strdup(s1);
// 	printf("strdup : %s\n", s2);
// 	for (int i = 0; i < len; i++)
// 		printf("%02x %c\n", s2[i], s2[i]);
// 	putchar('\n');

// 	ft_s2 = strdup(s1);
// 	printf("ft_strdup : %s\n", ft_s2);
// 	for (int i = 0; i < len; i++)
// 		printf("%02x %c\n", ft_s2[i], ft_s2[i]);
// 	putchar('\n');
// }
