/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:48:13 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/10 23:48:14 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcLength;

	srcLength = ft_strlen(src);
	i = 0;
	while (i + 1 < dstsize && i < srcLength)
	{
		dst[i] = src[i];
		i++;
	}
	if (i > 0 || (srcLength == 0 && dstsize > 0))
		dst[i] = '\0';
	return (srcLength);
}

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char ft_dst[] = "*****";
// 	char dst[] = "*****";
// 	char src[] = "";
// 	size_t	dst_size;

// 	dst_size = 2;
// 	printf("before ft_strlcpy :\n");
// 	printf("src : %s\n", src);
// 	printf("dst : %s\n", ft_dst);
// 	printf("after ft_strlcpy  :\n");
// 	printf("return value : %zu\n", ft_strlcpy(ft_dst, src, dst_size));
// 	printf("dst : %s\n", ft_dst);
// 	for (size_t i = 0; i < 3; i++) {
// 		printf("dst[%zu] = %02x : %c\n", i, ft_dst[i], ft_dst[i]);
// 	}

// 	printf("\nbefore strlcpy :\n");
// 	printf("src : %s\n", src);
// 	printf("dst : %s\n", dst);
// 	printf("after strlcpy  :\n");
// 	printf("return value : %zu\n", strlcpy(dst, src, dst_size));
// 	printf("dst : %s\n", dst);
// 	for (size_t i = 0; i < 3; i++) {
// 		printf("dst[%zu] = %02x : %c\n", i, dst[i], dst[i]);
// 	}
// }
