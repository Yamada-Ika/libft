/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:48:34 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 16:47:56 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*located_at;
	size_t	s_len;

	located_at = NULL;
	s_len = ft_strlen(s);
	s = s + s_len;
	while (s_len-- + 1 > 0)
	{
		if (*s == (const char)c)
		{
			located_at = (char *)s;
			break ;
		}
		s--;
	}
	return (located_at);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s[] = "0123456789";
// 	int c = 3;

// 	printf("strrchr :    %p %p\n", strrchr(s, c), &s[10]);
// 	printf("ft_strrchr : %p %p\n", ft_strrchr(s, c), &s[10]);
// }
