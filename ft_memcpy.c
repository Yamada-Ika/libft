#include <string.h>

void	*ft_memcpy(void *restrict dst,
	const void *restrict src, size_t n)
{
	void	*restrict dst_tmp;

	dst_tmp = dst;
	while (n-- > 0)
	{
		*(unsigned char *)(dst++) = *(unsigned char *)(src++);
	}
	return (dst_tmp);
}

// -- test code --
// #include <stdio.h>

// int main(void)
// {
// 	char 	ft_dst[11] = "0123456789", dst[11] = "0123456789";
// 	int		len = 11;
// 	char 	ft_src[] = "-----", src[] = "-----";
// 	size_t	n;
// 	void	*return_val;

	// n = 3;
	// printf("before ft_memcpy : \n");
	// printf("ft_src = %s\n", ft_src);
	// printf("ft_dst = %s\n", ft_dst);
	// printf("after ft_memcpy  : \n");
	// return_val = ft_memcpy(ft_dst, ft_src, n);
	// printf("ft_dst = %s\n", ft_dst);
	// printf("return value = %p should be equal to %p\n", return_val, ft_dst);

	// printf("before memcpy : \n");
	// printf("src = %s\n", src);
	// printf("dst = %s\n", dst);
	// printf("after memcpy :\n");
	// return_val = memcpy(dst, src, n);
	// printf("dst = %s\n", dst);
	// printf("return value = %p should be equal to %p\n", return_val, dst);
	// putchar('\n');

	// printf("Overlap case :\n");
	// n = 9;
	// printf("before ft_memcpy : \n");
	// printf("ft_dst = %s\n", ft_dst);
	// printf("after ft_memcpy  : \n");
	// return_val = ft_memcpy(ft_dst+1, ft_dst, n);
	// printf("ft_dst = %s\n", ft_dst);
	// printf("return value = %p should be equal to %p\n", return_val, ft_dst);

	// printf("before memcpy : \n");
	// printf("dst = %s\n", dst);
	// printf("after memcpy :\n");
	// return_val = memcpy(dst+1, dst, n);
	// printf("dst = %s\n", dst);
	// printf("return value = %p should be equal to %p\n", return_val, dst);
	// putchar('\n');
// }
