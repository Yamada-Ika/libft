/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 23:50:13 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/20 05:50:46 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_space(int c)
{
	return (('\t' <= c && c <= '\r') || c == ' ');
}

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;

	sign = 1;
	num = 0;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
		sign = 44 - *(str++);
	while (ft_isdigit(*str))
	{
		if ((LONG_MIN + (*str - '0')) / 10 < num
			&& num < (LONG_MAX - (*str - '0')) / 10)
			num = num * 10 + (*str - '0') * sign;
		else if (sign == 1)
			return ((int)LONG_MAX);
		else
			return ((int)LONG_MIN);
		str++;
	}
	return ((int)num);
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
