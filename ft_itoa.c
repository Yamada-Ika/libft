/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:46:29 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/16 00:17:54 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num_of_digits_helper(int n, size_t digit_count)
{
	if (n == 0 && digit_count == 0)
		return (1);
	else if (n == 0)
		return (digit_count);
	if (n < 0)
	{
		if (n == INT_MIN)
			n++;
		n *= -1;
		get_num_of_digits_helper(n, ++digit_count);
	}
	return (get_num_of_digits_helper(n / 10, ++digit_count));
}

static size_t	get_num_of_digits(int n)
{
	return (get_num_of_digits_helper(n, 0));
}

static void	ft_itoa_helper(int n, char *str, size_t len, size_t offset)
{
	if (n < 0)
	{
		*(str - len + 1) = '-';
		if (n == INT_MIN)
		{
			offset = 1;
			n++;
		}
		n *= -1;
	}
	if (n == 0 && len == 1)
		*str = n + '0';
	else if (n == 0)
		return ;
	else
	{
		if (offset == 1)
			*str = n % 10 + '0' + offset;
		else
			*str = n % 10 + '0';
		offset = 0;
		ft_itoa_helper(n / 10, --str, len, offset);
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i_len;

	i_len = get_num_of_digits(n);
	str = (char *)malloc(sizeof(char) * (i_len + 1));
	if (str == NULL)
		return (NULL);
	*(str + i_len) = '\0';
	ft_itoa_helper(n, str + i_len - 1, i_len, 0);
	return (str);
}

// -- test code --
// #include <stdio.h>
// #include <limits.h>

// int main(void){
// 	char *return_value;

// 	return_value = ft_itoa(0);
// 	printf("%s\n", return_value);
// 	free(return_value);
// 	return_value = ft_itoa(1);
// 	printf("%s\n", return_value);
// 	free(return_value);
// 	return_value = ft_itoa(12345);
// 	printf("%s\n", return_value);
// 	free(return_value);
// 	return_value = ft_itoa(-1);
// 	printf("%s\n", return_value);
// 	free(return_value);
// 	return_value = ft_itoa(-12);
// 	printf("%s\n", return_value);
// 	return_value = ft_itoa(12);
// 	printf("%s\n", return_value);
// 	free(return_value);
// 	return_value = ft_itoa(-12);
// 	printf("%s\n", return_value);
// 	return_value = ft_itoa(123);
// 	printf("%s\n", return_value);
// 	free(return_value);
// 	return_value = ft_itoa(-123);
// 	printf("%s\n", return_value);
// 	return_value = ft_itoa(INT_MAX);
// 	printf("%s\n", return_value);
// 	free(return_value);
// 	return_value = ft_itoa(INT_MIN);
// 	printf("%s\n", return_value);
// 	free(return_value);
// }
