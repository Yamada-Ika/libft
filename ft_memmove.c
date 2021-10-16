/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:33:06 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/16 21:51:13 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*c_dst;
	const char	*c_src;

	if (dst == src || len == 0)
		return (dst);
	c_dst = (char *)dst;
	c_src = (const char *)src;
	i = 0;
	while (dst > src && i < len)
	{
		c_dst[len - 1 - i] = c_src[len - 1 - i];
		i++;
	}
	while (dst < src && i < len)
	{
		c_dst[i] = c_src[i];
		i++;
	}
	return (dst);
}

// -- test code --
// #include <stdio.h>

// int main(void)
// {
// 	char 	ft_dst[] = "";
// 	char	dst[128 * 1024 * 1024] = "";
// 	int		len = 11;
// 	char 	ft_src[10] = "abcd",src[128 * 1024 * 1024] = "A";
// 	size_t	n;
// 	void	*return_val;

// 	n = 128 * 1024 * 1024;
	// printf("before ft_memmove : \n");
	// printf("ft_src = %s\n", ft_src);
	// printf("ft_dst = %s\n", ft_dst);
	// printf("after ft_memmove  : \n");
	// return_val = ft_memmove(ft_dst, ft_src, n);
	// printf("ft_dst = %s\n", ft_dst);
	// printf("return value = %p should be equal to %p\n", return_val, ft_dst);

// 	printf("before memmove : \n");
// 	printf("src = %s\n", src);
// 	printf("dst = %s\n", dst);
// 	printf("after memmove :\n");
// 	return_val = memmove(dst, src, n);
// 	printf("dst = %s\n", dst);
// 	printf("return value = %p should be equal to %p\n", return_val, dst);
// 	putchar('\n');

// 	// <- dst = src ->
// 	n = 2;
// 	printf("before ft_memmove : \n");
// 	printf("ft_src = %s\n", ft_src);
// 	printf("ft_dst = %s\n", ft_dst);
// 	printf("after ft_memmove  : \n");
// 	return_val = ft_memmove(ft_dst, ft_dst, n);
// 	printf("ft_dst = %s\n", ft_dst);
// 	printf("return value = %p should be equal to %p\n", return_val, ft_dst);

// 	printf("before memmove : \n");
// 	printf("src = %s\n", src);
// 	printf("dst = %s\n", dst);
// 	printf("after memmove :\n");
// 	return_val = memmove(dst, dst, n);
// 	printf("dst = %s\n", dst);
// 	printf("return value = %p should be equal to %p\n", return_val, dst);
// 	putchar('\n');

// 	// <- dst = src = NULL ->
// 	n = 2;
// 	printf("before ft_memmove : \n");
// 	printf("ft_src = %s\n", ft_src);
// 	printf("ft_dst = %s\n", ft_dst);
// 	printf("after ft_memmove  : \n");
// 	return_val = ft_memmove(NULL, NULL, n);
// 	printf("ft_dst = %s\n", ft_dst);
// 	printf("return value = %p should be equal to %p\n", return_val, NULL);

// 	printf("before memmove : \n");
// 	printf("src = %s\n", src);
// 	printf("dst = %s\n", dst);
// 	printf("after memmove :\n");
// 	return_val = memmove(NULL, NULL, n);
// 	printf("dst = %s\n", dst);
// 	printf("return value = %p should be equal to %p\n", return_val, NULL);
// 	putchar('\n');

// 	// <- len = 0 ->
// 	n = 0;
// 	printf("before ft_memmove : \n");
// 	printf("ft_src = %s\n", ft_src);
// 	printf("ft_dst = %s\n", ft_dst);
// 	printf("after ft_memmove  : \n");
// 	return_val = ft_memmove(ft_dst, ft_src, n);
// 	printf("ft_dst = %s\n", ft_dst);
// 	printf("return value = %p should be equal to %p\n", return_val, ft_dst);

// 	printf("before memmove : \n");
// 	printf("src = %s\n", src);
// 	printf("dst = %s\n", dst);
// 	printf("after memmove :\n");
// 	return_val = memmove(dst, src, n);
// 	printf("dst = %s\n", dst);
// 	printf("return value = %p should be equal to %p\n", return_val, dst);
// 	putchar('\n');

// 	printf("Overlap case (dst > src):\n");
// 	n = 3;
// 	printf("before ft_memmove : \n");
// 	printf("ft_dst = %s\n", ft_dst);
// 	printf("after ft_memmove  : \n");
// 	return_val = ft_memmove(ft_dst+1, ft_dst, n);
// 	printf("ft_dst = %s\n", ft_dst);
// 	printf("return value = %p should be equal to %p\n", return_val, ft_dst);

// 	printf("before memmove : \n");
// 	printf("dst = %s\n", dst);
// 	printf("after memmove :\n");
// 	return_val = memmove(dst+1, dst, n);
// 	printf("dst = %s\n", dst);
// 	printf("return value = %p should be equal to %p\n", return_val, dst);
// 	putchar('\n');

// 	printf("Overlap case (dst < src):\n");
// 	n = 3;
// 	printf("before ft_memmove : \n");
// 	printf("ft_dst = %s\n", ft_dst);
// 	printf("after ft_memmove  : \n");
// 	return_val = ft_memmove(ft_dst, ft_dst+1, n);
// 	printf("ft_dst = %s\n", ft_dst);
// 	printf("return value = %p should be equal to %p\n", return_val, ft_dst);

// 	printf("before memmove : \n");
// 	printf("dst = %s\n", dst);
// 	printf("after memmove :\n");
// 	return_val = memmove(dst, dst+1, n);
// 	printf("dst = %s\n", dst);
// 	printf("return value = %p should be equal to %p\n", return_val, dst);
// 	putchar('\n');

// 	printf("Overlap case (dst = src):\n");
// 	n = 3;
// 	printf("before ft_memmove : \n");
// 	printf("ft_dst = %s\n", ft_dst);
// 	printf("after ft_memmove  : \n");
// 	return_val = ft_memmove(ft_dst, ft_dst, n);
// 	printf("ft_dst = %s\n", ft_dst);
// 	printf("return value = %p should be equal to %p\n", return_val, ft_dst);

// 	printf("before memmove : \n");
// 	printf("dst = %s\n", dst);
// 	printf("after memmove :\n");
// 	return_val = memmove(dst, dst, n);
// 	printf("dst = %s\n", dst);
// 	printf("return value = %p should be equal to %p\n", return_val, dst);
// 	putchar('\n');
// }
