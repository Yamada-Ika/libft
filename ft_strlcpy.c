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
	dst[i] = '\0';
	return (srcLength);
}

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char ft_dst[] = "*****";
// 	char dst[] = "*****";
// 	char src[] = "0123456789";

// 	printf("before ft_strlcpy :\n");
// 	printf("src : %s\n", src);
// 	printf("dst : %s\n", ft_dst);
// 	printf("after ft_strlcpy  :\n");
// 	printf("return value : %zu\n", ft_strlcpy(ft_dst, src, 6));
// 	printf("dst : %s\n", ft_dst);
// 	for (size_t i = 0; i < 6; i++) {
// 		printf("dst[%zu] = %02x : %c\n", i, ft_dst[i], ft_dst[i]);
// 	}

// 	printf("\nbefore strlcpy :\n");
// 	printf("src : %s\n", src);
// 	printf("dst : %s\n", dst);
// 	printf("after strlcpy  :\n");
// 	printf("return value : %zu\n", strlcpy(dst, src, 6));
// 	printf("dst : %s\n", dst);
// 	for (size_t i = 0; i < 6; i++) {
// 		printf("dst[%zu] = %02x : %c\n", i, dst[i], dst[i]);
// 	}
// }
