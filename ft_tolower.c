/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:55:19 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/09 23:55:19 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		return (c + 32);
	else
		return (c);
}

// -- test code --
// #include <stdio.h>
// #include <ctype.h>

// int main(void){
// 	int c = 70;

// 	printf("tolower :    %d\n", tolower(c));
// 	printf("ft_tolower : %d\n", ft_tolower(c));
// }
