/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:53 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/15 17:43:01 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == (const char)c)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
		s++;
	}
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s[] = "0123";
// 	int c = 0;

// 	printf("strchr :    %p\n", strchr(s, c));
// 	printf("ft_strchr : %p %p\n", ft_strchr(s, c), &s[4]);
// }
