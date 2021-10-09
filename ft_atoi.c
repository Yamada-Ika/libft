/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 23:50:13 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/09 01:08:40 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <limits.h>
#include "libft.h"

static void trime_str(const char *str, int *sign)
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

int	ft_atoi(const char *str)
{
	long	num_in_str;
	int		sign;

	trime_str(str, &sign);
	num_in_str = 0;
	while (ft_isdigit(*str))
	{
		printf("%lld %lld %d %d\n", num_in_str, 10 * num_in_str, *str - '0', sign);
		printf("%ld %ld\n", LONG_MAX, LONG_MIN);
		num_in_str *= 10;
		if (sign == 1)
		{
			if (num_in_str + (*str - '0') < LONG_MAX)
				num_in_str += *str - '0';
			else
				num_in_str = LONG_MAX;
		}
		if (sign == -1)
		{
			if (LONG_MIN < num_in_str - (*str - '0'))
				num_in_str -= *str - '0';
			else
				num_in_str = LONG_MIN;
		}
		if (num_in_str == LONG_MAX || num_in_str == LONG_MIN)
			break ;
		str++;
	}
	return ((int)num_in_str);
}

// -- test code --
#include <stdio.h>
#include <stdlib.h>

int main(void){
	char str[] = "99999999999999999999999999";

	printf("atoi :    %d\n", atoi(str));
	printf("ft_atoi : %d\n", ft_atoi(str));
}
