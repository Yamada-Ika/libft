#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	while (n-- > 0)
		*(char *)(s++) = '\0';
}

// -- test code --
// #include <stdio.h>

// int main(void)
// {
//     char    ft_s[] = "12345";
// 	char    s[] = "12345";
// 	int		len = 5;
//     size_t  n;

// 	n = 3;
// 	printf("n = %zu\n", n);

// 	printf("before ft_bzero : \n");
// 	for (int i = 0; i < len; i++)
// 		printf("%02x ", ft_s[i]);
// 	putchar('\n');
//     ft_bzero(ft_s, n);
// 	printf("after ft_bzero  : \n");
// 	for (int i = 0; i < len; i++)
// 		printf("%02x ", ft_s[i]);
// 	putchar('\n');

// 	printf("before bzero : \n");
// 	for (int i = 0; i < len; i++)
// 		printf("%02x ", s[i]);
// 	putchar('\n');
//     bzero(s, n);
// 	printf("after bzero  : \n");
// 	for (int i = 0; i < len; i++)
// 		printf("%02x ", s[i]);
// 	putchar('\n');
// }