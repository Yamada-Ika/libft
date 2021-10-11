/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:48:34 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 01:00:37 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*located_at;

	located_at = NULL;
	i = ft_strlen(s) + 1;
	while (--i >= 0)
	{
		if (s[i] == c)
		{
			located_at = (char *)&s[i];
			break ;
		}
	}
	return (located_at);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s[] = "0123456789", c = '0';

// 	printf("strrchr :    %p address of c in s : %p\n", 
// 		strrchr(s, c), &s[c ? c - '0' : 10]);
// 	printf("ft_strrchr : %p address of c in s : %p\n", 
// 		ft_strrchr(s, c), &s[c ? c - '0' : 10]);
// }
