/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:46:29 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/21 16:26:18 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_digits(int n)
{
	size_t		digits_count;

	digits_count = 0;
	if (n < 0)
		digits_count++;
	while (n != 0)
	{
		digits_count++;
		n /= 10;
	}
	return (digits_count);
}

char	*ft_itoa(int n)
{
	size_t		digits_count;
	char		*num;
	int			is_nega;

	if (n == 0)
		return (ft_strdup("0"));
	is_nega = 0;
	if (n < 0)
		is_nega = 1;
	digits_count = count_digits(n);
	num = (char *)ft_calloc(digits_count + 1, sizeof(char));
	if (num == NULL)
		return (NULL);
	while (digits_count-- > 0)
	{
		num[digits_count] = "9876543210123456789"[n % 10 + 9];
		n /= 10;
	}
	if (is_nega > 0)
		num[0] = '-';
	return (num);
}

// -- test code --
// #include <stdio.h>
// #include <limits.h>

// int main(void){
// 	char *ret;

// 	ret = ft_itoa(INT_MIN);
// 	printf("%s\n", ret);
// 	free(ret);
// }
