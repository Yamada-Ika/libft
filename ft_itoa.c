/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:46:29 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/18 15:50:26 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_helper(long long n, int digi_count, int is_nega)
{
	long long	tmp_n;
	char		*num;

	tmp_n = n;
	while (tmp_n > 0)
	{
		digi_count++;
		tmp_n /= 10;
	}
	num = (char *)ft_calloc(digi_count + 1, sizeof(char));
	if (num == NULL)
		return (NULL);
	while (digi_count-- > 0)
	{
		num[digi_count] = n % 10 + '0';
		n /= 10;
	}
	if (is_nega)
		num[0] = '-';
	return (num);
}

char	*ft_itoa(int n)
{
	int			is_negative;
	int			digits_count;
	long long	ll_n;

	if (n == 0)
		return (ft_strdup("0"));
	is_negative = 0;
	digits_count = 0;
	ll_n = (long long)n;
	if (ll_n < 0)
	{
		is_negative = 1;
		digits_count = 1;
		ll_n *= -1;
	}
	return (ft_itoa_helper(ll_n, digits_count, is_negative));
}

// -- test code --
// #include <stdio.h>
// #include <limits.h>

// int main(void){
// 	char *ret;

// 	ret = ft_itoa(0);
// 	printf("%s\n", ret);
// 	free(ret);
// 	ret = ft_itoa(1);
// 	printf("%s\n", ret);
// 	free(ret);
// 	ret = ft_itoa(12);
// 	printf("%s\n", ret);
// 	free(ret);
// 	ret = ft_itoa(-12);
// 	printf("%s\n", ret);
// 	free(ret);
// 	ret = ft_itoa(INT_MIN);
// 	printf("%s\n", ret);
// 	free(ret);
// 	ret = ft_itoa(INT_MAX);
// 	printf("%s\n", ret);
// 	free(ret);
// }
