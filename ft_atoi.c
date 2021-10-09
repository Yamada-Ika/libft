/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 23:50:13 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/09 12:21:12 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <limits.h>
#include "libft.h"

static void	trime_str(const char *str, int *sign)
{
	while (!ft_isdigit(*str) && *str != '+' && *str != '-')
		str++;
	*sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign = -1;
		str++;
	}
}

static long	atoi_helper(const char *str, long num, int sign)
{
	if (sign == 1)
	{
		if (num < (LONG_MAX - (*str - '0')) / 10)
		{
			num *= 10;
			num += *str - '0';
		}
		else
			num = LONG_MAX;
	}
	if (sign == -1)
	{
		if ((LONG_MIN + (*str - '0')) / 10 < num)
		{
			num *= 10;
			num -= *str - '0';
		}
		else
			num = LONG_MIN;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	long	num_in_str;
	int		sign;

	trime_str(str, &sign);
	num_in_str = 0;
	while (ft_isdigit(*str))
	{
		num_in_str = atoi_helper(str, num_in_str, sign);
		if (num_in_str == LONG_MAX || num_in_str == LONG_MIN)
			break ;
		str++;
	}
	return ((int)num_in_str);
}

// -- test code --
// #include <stdio.h>
// #include <stdlib.h>

// int main(void){
// 	char str[] = "-92233720368547758089";
// 	// char str[] = "92233720368547758079";

// 	printf("atoi :    %d\n", atoi(str));
// 	printf("ft_atoi : %d\n", ft_atoi(str));
// }
