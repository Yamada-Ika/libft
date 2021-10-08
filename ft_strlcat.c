#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	int		i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (i + dst_len + 1 < dstsize && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dstsize != 0 || dstsize <= dst_len)
		dst[dst_len + i] = '\0';
	// if (dstsize > src_len)
	// 	dstsize = src_len;
	return (dst_len + src_len);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char dst[20] = "01234", src[] = "56789";
// 	char ft_dst[20] = "01234"; 
// 	// size_t len = 11;
// 	size_t return_value;
// 	size_t dstsize;

// 	dstsize = 5 + 6;
// 	printf("dstsize = %zu\n", dstsize);
// 	return_value = strlcat(dst, src, dstsize);
// 	printf("strlcat    : %s return value : %zu\n", dst, return_value);
// 	for (int i = 0; i < return_value; i++) {
// 		printf("dst[%d] = %02x : %c\n", i, dst[i], dst[i]);
// 	}
// 	printf("dstsize = %zu\n", dstsize);
// 	return_value = ft_strlcat(ft_dst, src, dstsize);
// 	printf("ft_strlcat : %s return value : %zu\n", ft_dst, return_value);
// 	for (int i = 0; i < return_value; i++) {
// 		printf("dst[%d] = %02x : %c\n", i, ft_dst[i], ft_dst[i]);
// 	}
// }
