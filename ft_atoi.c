/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 23:50:13 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/15 23:26:27 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_space(int c)
{
	if (('\t' <= c && c <= '\r') || c == ' ')
		return (1);
	else
		return (0);
}

static char	*trime_str(const char *str, int *sign)
{
	if (*str == '-' || *str == '+')
	{
		*sign = (*str - 44) * (-1);
		return ((char *)++str);
	}
	if (ft_isdigit(*str))
		return ((char *)str);
	if (!is_space(*str))
		return (NULL);
	return (trime_str(++str, sign));
}

static long	ft_atoi_helper(const char *str, long num, int sign)
{
	if (!ft_isdigit(*str))
		return num;
	if ((LONG_MIN + (*str - '0')) / 10 < num
		&& num < (LONG_MAX - (*str - '0')) / 10)
	{
		num *= 10;
		num += (*str - '0') * sign;
	}
	else
		if (sign == 1)
			return (LONG_MAX);
		else
			return (LONG_MIN);
	return (ft_atoi_helper(++str, num, sign));
}

int	ft_atoi(const char *str)
{
	long	num_in_str;
	int		sign;

	num_in_str = 0;
	sign = 1;
	str = (const char *)trime_str(str, &sign);
	if (str == NULL)
		return (num_in_str);
	num_in_str = ft_atoi_helper(str, num_in_str, sign);
	return ((int)num_in_str);
}

// -- test code --
// #include <stdio.h>
// #include <stdlib.h>

// int main(void){
	// char str[] = "-92233720368547758089";
	// char str[] = "92233720368547758079";
	// char str[] = "-2147483649";
	// char str[] = "\e06050";
	// char str[] = "\t 06050";
// 	char str[] = "+100";

// 	printf("atoi :    %d\n", atoi(str));
// 	printf("ft_atoi : %d\n", ft_atoi(str));
// }
