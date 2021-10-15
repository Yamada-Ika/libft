/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:17:09 by yamadaiori        #+#    #+#             */
/*   Updated: 2021/10/16 00:17:38 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

// int	ft_isalpha(int c)
// {
// 	if ((97 <= c && c <= 122) || (65 <= c && c <= 90))
// 		return (1);
// 	else
// 		return (0);
// }

// Test case

// #include <stdio.h>
// #include <ctype.h>

// int main(void) {
// 	int i;

// 	i = -1;
// 	printf("isalpha    : %d\n", isalpha(i));
// 	printf("ft_isalpha : %d\n", ft_isalpha(i));
// }

// int main(void){
// 	int	ascii_num = 0;
// 	printf("ft_isalpha : Test starts!\n");
// 	// 64 : @
// 	ascii_num = 64;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 65 : A
// 	ascii_num = 65;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 90 : Z
// 	ascii_num = 90;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 91 : [
// 	ascii_num = 65;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 96 : `
// 	ascii_num = 96;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 97 : a
// 	ascii_num = 97;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 122 : z
// 	ascii_num = 122;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 123 : {
// 	ascii_num = 123;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	printf("ft_isalpha : \033[32mOK!\033[0m\n");
// 	return (1);
// }
