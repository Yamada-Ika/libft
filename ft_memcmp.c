/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:46:43 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/16 22:09:02 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*uc_s1;
	const unsigned char	*uc_s2;

	uc_s1 = (const unsigned char *)s1;
	uc_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (uc_s1[i] != uc_s2[i])
			return (uc_s1[i] - uc_s2[i]);
		i++;
	}
	return (0);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	int s1[] = {0,0,0,0}, s2[] = {255,255,255,255};
// 	char str1[] = "", str2[] = "";
// 	int n, return_value;

// 	n = 0;
// 	return_value = memcmp(s1, s2, n);
// 	printf("memcmp return value :    %d\n", return_value);
// 	return_value = ft_memcmp(s1, s2, n);
// 	printf("ft_memcmp return value : %d\n\n", return_value);

// 	// // Zero-length strings case
// 	// n = 0;
// 	// return_value = memcmp(str1, str2, n);
// 	// printf("memcmp return value :    %d\n", return_value);
// 	// return_value = ft_memcmp(str1, str2, n);
// 	// printf("ft_memcmp return value : %d\n\n", return_value);

// 	// //  Memory access violation case
// 	// n = 20;
// 	// return_value = memcmp(s1, s2, n);
// 	// printf("memcmp return value :    %d\n", return_value);
// 	// return_value = ft_memcmp(s1, s2, n);
// 	// printf("ft_memcmp return value : %d\n\n", return_value);
// }
