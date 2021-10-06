#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*address;

	address = NULL;
	while (n-- > 0)
	{
		if (*(unsigned char *)s++ == (unsigned char)c)
		{
			address = (void *)--s;
			break ;
		}
	}
	return (address);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s[] = "abcdefg";
// 	char c;
// 	int n, *return_value;

// 	n = 4;
// 	c = 'b';
	// return_value = memchr(s, c, n);
	// printf("memchr return value :    %p %c in s : %p\n",
	// 	return_value, c, &s[1]);
	// return_value = ft_memchr(s, c, n);
	// printf("ft_memchr return value : %p %c in s : %p\n",
	// 	return_value, c, &s[1]);
// 	n = 4;
// 	c = 'z';
// 	return_value = memchr(s, c, n);
// 	printf("memchr return value :    %p %c in s : %p\n", return_value, c, NULL);
// 	return_value = ft_memchr(s, c, n);
// 	printf("ft_memchr return value : %p %c in s : %p\n", return_value, c, NULL);

// 	n = 1000;
// 	c = 'z';
// 	return_value = memchr(s, c, n);
// 	printf("memchr return value :    %p %c in s : %p\n", return_value, c, NULL);
// 	return_value = ft_memchr(s, c, n);
// 	printf("ft_memchr return value : %p %c in s : %p\n", return_value, c, NULL);
// }
