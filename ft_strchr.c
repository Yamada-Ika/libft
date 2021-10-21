/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:53 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/21 18:22:53 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (1)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		if (s[i] == '\0')
			return (NULL);
		i++;
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
