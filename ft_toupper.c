/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:49:44 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/17 12:51:41 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

// -- test code --
// #include <stdio.h>
// #include <ctype.h>

// int main(void){
// 	int c = 100;

// 	printf("toupper :    %d\n", toupper(c));
// 	printf("ft_toupper : %d\n", ft_toupper(c));
// }
