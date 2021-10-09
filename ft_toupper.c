/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:49:44 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/09 23:53:24 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		return (c - 32);
	else
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
