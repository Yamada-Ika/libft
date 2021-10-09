/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:33:06 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/09 12:23:27 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*uc_dst;
	const char	*uc_src;
	size_t		i;

	if (dst == NULL || src == NULL)
		return (dst);
	uc_dst = (char *)dst;
	uc_src = (const char *)src;
	i = 0;
	while (i < len && dst >= src)
	{
		uc_dst[len - 1 - i] = uc_src[len - 1 - i];
		i++;
	}
	while (i < len && dst < src)
	{
		uc_dst[i] = uc_src[i];
		i++;
	}
	return (dst);
}

// -- test code --
// #include <stdio.h>

// int main(void)
// {
// 	char 	ft_dst[11] = "0123456789";
// 	char	dst[11] = "0123456789";
// 	int		len = 11;
// 	char 	ft_src[] = "**********", src[] = "**********";
// 	size_t	n;
// 	void	*return_val;

	// n = 3;
	// printf("before ft_memmove : \n");
	// printf("ft_src = %s\n", ft_src);
	// printf("ft_dst = %s\n", ft_dst);
	// printf("after ft_memmove  : \n");
	// return_val = ft_memmove(ft_dst, ft_src, n);
	// printf("ft_dst = %s\n", ft_dst);
	// printf("return value = %p should be equal to %p\n", return_val, ft_dst);

	// printf("before memmove : \n");
	// printf("src = %s\n", src);
	// printf("dst = %s\n", dst);
	// printf("after memmove :\n");
	// return_val = memmove(dst, src, n);
	// printf("dst = %s\n", dst);
	// printf("return value = %p should be equal to %p\n", return_val, dst);
	// putchar('\n');

	// printf("Overlap case (dst > src):\n");
	// n = 3;
	// printf("before ft_memmove : \n");
	// printf("ft_dst = %s\n", ft_dst);
	// printf("after ft_memmove  : \n");
	// return_val = ft_memmove(ft_dst+1, ft_dst, n);
	// printf("ft_dst = %s\n", ft_dst);
	// printf("return value = %p should be equal to %p\n", return_val, ft_dst);

	// printf("before memmove : \n");
	// printf("dst = %s\n", dst);
	// printf("after memmove :\n");
	// return_val = memmove(dst+1, dst, n);
	// printf("dst = %s\n", dst);
	// printf("return value = %p should be equal to %p\n", return_val, dst);
	// putchar('\n');

	// printf("Overlap case (dst < src):\n");
	// n = 3;
	// printf("before ft_memmove : \n");
	// printf("ft_dst = %s\n", ft_dst);
	// printf("after ft_memmove  : \n");
	// return_val = ft_memmove(ft_dst, ft_dst+1, n);
	// printf("ft_dst = %s\n", ft_dst);
	// printf("return value = %p should be equal to %p\n", return_val, ft_dst);

	// printf("before memmove : \n");
	// printf("dst = %s\n", dst);
	// printf("after memmove :\n");
	// return_val = memmove(dst, dst+1, n);
	// printf("dst = %s\n", dst);
	// printf("return value = %p should be equal to %p\n", return_val, dst);
	// putchar('\n');

	// printf("Overlap case (dst = src):\n");
	// n = 3;
	// printf("before ft_memmove : \n");
	// printf("ft_dst = %s\n", ft_dst);
	// printf("after ft_memmove  : \n");
	// return_val = ft_memmove(ft_dst, ft_dst, n);
	// printf("ft_dst = %s\n", ft_dst);
	// printf("return value = %p should be equal to %p\n", return_val, ft_dst);

	// printf("before memmove : \n");
	// printf("dst = %s\n", dst);
	// printf("after memmove :\n");
	// return_val = memmove(dst, dst, n);
	// printf("dst = %s\n", dst);
	// printf("return value = %p should be equal to %p\n", return_val, dst);
	// putchar('\n');
// }
