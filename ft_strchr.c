/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:53 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 00:09:32 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*c_located_at;

	c_located_at = NULL;
	i = 0;
	while (1)
	{
		if (s[i] == (char)c)
		{
			c_located_at = (char *)&s[i];
			break ;
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (c_located_at);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s[] = "0123", c = '2';

// 	printf("strchr :    %p\n", strchr(s, c));
// 	printf("ft_strchr : %p\n", ft_strchr(s, c));
// }
