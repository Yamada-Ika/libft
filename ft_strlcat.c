/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:59:00 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/17 16:58:25 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	cat_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize < dst_len + 1)
		return (dstsize + src_len);
	cat_len = dstsize - dst_len - 1;
	if (cat_len > src_len)
		cat_len = src_len;
	ft_strlcpy(dst + dst_len, src, cat_len + 1);
	return (dst_len + src_len);
}

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char dst[100] = "012";
// 	char src[100] = "012";
// 	printf("ft ret  : %zu\n", ft_strlcat(dst, src, 3));
// 	printf("lib ret : %zu\n", strlcat(dst, src, 3));
// 	// printf("dst : %s\n", dst);
// }

/*
* : dstsize
              *
dst = |a|\0| | | |
       *
dst = |a|b|c|\0| |
*/
