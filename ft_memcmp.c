#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	diff;

	diff = 0;
	while (n-- > 0)
	{
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
		{
			diff = *(unsigned char *)--s1 - *(unsigned char *)--s2;
			break ;
		}
	}
	return (diff);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s1[] = "Nintendo", s2[] = "Ninten9do";
// 	char str1[] = "", str2[] = "";
// 	int n, return_value;

// 	n = 0;
// 	return_value = memcmp(s1, s2, n);
// 	printf("memcmp return value :    %d\n", return_value);
// 	return_value = ft_memcmp(s1, s2, n);
// 	printf("ft_memcmp return value : %d\n\n", return_value);

// 	// Zero-length strings case
// 	n = 0;
// 	return_value = memcmp(str1, str2, n);
// 	printf("memcmp return value :    %d\n", return_value);
// 	return_value = ft_memcmp(str1, str2, n);
// 	printf("ft_memcmp return value : %d\n\n", return_value);

// 	//  Memory access violation case
// 	n = 20;
// 	return_value = memcmp(s1, s2, n);
// 	printf("memcmp return value :    %d\n", return_value);
// 	return_value = ft_memcmp(s1, s2, n);
// 	printf("ft_memcmp return value : %d\n\n", return_value);
// }
