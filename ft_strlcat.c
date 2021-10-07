#include <string.h>
#include <stdio.h>
#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	count;

// 	count = 0;
// 	while (s[count] != '\0')
// 		count++;
// 	return (count);
// }

//  size_t
//  strlcat(char * restrict dst,
//      const char * restrict src, size_t dstsize);

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	int		i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (i + dst_len + 1 < dstsize && *src != '\0')
		dst[dst_len++] = *src++;
	dst[dst_len] = '\0';
	if (dstsize > src_len)
		dstsize = src_len;
	return (dstsize + src_len);
}

//  strlcat() appends string src to the end of dst.  It
//  will append at most dstsize - strlen(dst) - 1 char-
//  acters.  It will then NUL-terminate, unless dstsize
//  is 0 or the original dst string was longer than
//  dstsize (in practice this should not happen as it
//  means that either dstsize is incorrect or that dst
//  is not a proper string).

//  If the src and dst strings overlap, the behavior is
//  undefined.

//  Besides quibbles over the return type (size_t ver-
//  sus int) and signal handler safety (snprintf(3) is
//  sus int) and signal handler safety (snprintf(3) is
//  not entirely safe on some systems), the following
//  two are equivalent:

//        n = strlcpy(dst, src, len);
//        n = snprintf(dst, len, "%s", src);

//  Like snprintf(3), the strlcpy() and strlcat() func-
//  tions return the total length of the string they
//  tried to create.  For strlcpy() that means the
//  length of src.  For strlcat() that means the ini-
//  tial length of dst plus the length of src.

//  If the return value is >= dstsize, the output
//  string has been truncated.  It is the caller's
//  responsibility to handle this.

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char dst[20] = "01234", src[] = "56789";
// 	char ft_dst[20] = "01234"; 
// 	// size_t len = 11;
// 	size_t return_value;
// 	size_t dstsize;

// 	dstsize = 10;
// 	printf("dstsize = %zu\n", dstsize);
// 	return_value = strlcat(dst, src, dstsize);
// 	printf("strlcat : %s return value : %zu\n", dst, return_value);

// 	printf("dstsize = %zu\n", dstsize);
// 	return_value = ft_strlcat(ft_dst, src, dstsize);
// 	printf("ft_strlcat : %s return value : %zu\n", ft_dst, return_value);
// }
