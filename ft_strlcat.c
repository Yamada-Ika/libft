/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:59:00 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/10 00:02:32 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize < dst_len + 1)
		return (dst_len + src_len);
	if (src_len < dstsize - dst_len - 1)
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
	}
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char src[] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char dst[3840] = "there is no stars in the sky";
// 	char ft_dst[3840] = "there is no stars in the sky"; 
// 	char s1[4] = "";
// 	char s2[4] = "";

// 	// size_t len = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
// 	size_t return_value;
// 	size_t dstsize;

// 	dstsize = strlen(dst);
// 	printf("dstsize = %zu\n", dstsize);
// 	return_value = strlcat(dst, src, dstsize);
// 	printf("strlcat    : %s return value : %zu\n", dst, return_value);
// 	// for (size_t i = 0; i < return_value + 1; i++) {
// 	// 	printf("dst[%02zu] = %02x : %c\n", i, dst[i], dst[i]);
// 	// }
// 	printf("dstsize = %zu\n", dstsize);
// 	return_value = ft_strlcat(ft_dst, src, dstsize);
// 	printf("ft_strlcat : %s return value : %zu\n", ft_dst, return_value);
// 	// for (size_t i = 0; i < return_value + 1; i++) {
// 	// 	printf("dst[%02zu] = %02x : %c\n", i, ft_dst[i], ft_dst[i]);
// 	// }
// 	printf("strlcat return value    : %zu\n", strlcat(s1, "thx to ntoniolo for this test !", 4));
// 	printf("ft_strlcat return value : %zu\n", ft_strlcat(s2, "thx to ntoniolo for this test !", 4));
// }
