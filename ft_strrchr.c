/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:48:34 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/16 22:03:27 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	while (1)
	{
		if (s[s_len - i] == (const char)c)
			return (s + s_len - i);
		if (s_len - i == 0)
			return (NULL);
		i++;
	}
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s[] = "0123456789";
// 	int c = 3;

// 	printf("strrchr :    %p %p\n", strrchr(s, c), &s[10]);
// 	printf("ft_strrchr : %p %p\n", ft_strrchr(s, c), &s[10]);
// }
