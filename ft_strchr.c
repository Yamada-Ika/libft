/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:53 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 16:58:19 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*located_at;

	located_at = NULL;
	while (1)
	{
		if (*s == (const char)c)
		{
			located_at = (char *)s;
			break ;
		}
		if (*s == '\0')
			break ;
		s++;
	}
	return (located_at);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s[] = "0123";
// 	int c = 0;

// 	printf("strchr :    %p\n", strchr(s, c));
// 	printf("ft_strchr : %p %p\n", ft_strchr(s, c), &s[4]);
// }
