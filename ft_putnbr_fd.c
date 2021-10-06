#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

// size_t	get_digits(int n)
// {
// 	size_t	digit_num;

// 	digit_num = 0;
// 	if (n == 0)
// 		return (1);
// 	if (n < 0)
// 		digit_num += 1;
// 	while (n != 0)
// 	{
// 		digit_num++;
// 		n /= 10;
// 	}
// 	return (digit_num);
// }

// char	*itostr(int n, char *str, size_t str_len, size_t *i)
// {
// 	size_t	flg_int_min;

// 	flg_int_min = 0;
// 	if (n < 0)
// 	{
// 		if (n == INT_MIN)
// 		{
// 			flg_int_min = 1;
// 			n++;
// 		}
// 		n *= -1;
// 		str[0] = '-';
// 	}
// 	while (*i < str_len)
// 	{
// 		str[str_len - (*i + 1)] = n % 10 + '0';
// 		n /= 10;
// 		if (n == 0)
// 			break ;
// 		*i += 1;
// 	}
// 	if (flg_int_min == 1)
// 		str[str_len - 1] += 1;
// 	str[str_len] = '\0';
// 	return (str);
// }

// char	*ft_itoa(int n)
// {
// 	char	*stringfied_i;
// 	size_t	str_i_len;
// 	size_t	i;

// 	str_i_len = get_digits(n);
// 	stringfied_i = (char *)malloc(sizeof(char) * (str_i_len + 1));
// 	if (stringfied_i == NULL)
// 		return (NULL);
// 	i = 0;
// 	stringfied_i = itostr(n, stringfied_i, str_i_len, &i);
// 	return (stringfied_i);
// }

// size_t	ft_strlen(const char *s)
// {
// 	size_t	count;

// 	count = 0;
// 	while (s[count] != '\0')
// 		count++;
// 	return (count);
// }

// void	ft_putstr_fd(char const *c, int fd)
// {
// 	write(fd, (const void *)c, ft_strlen(c));
// }

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}

// -- test code --
int main(void){
	ft_putnbr_fd(100, 1);
}
