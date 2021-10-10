/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:46:07 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/10 23:46:08 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

// int	ft_isalpha(int c)
// {
// 	if (('a' <= (char)c && (char)c <= 'z')
// 		|| ('A' <= (char)c && (char)c <= 'Z'))
// 		return (1);
// 	else
// 		return (0);
// }

// int	ft_isdigit(int c)
// {
// 	if ('0' <= (char)c && (char)c <= '9')
// 		return (1);
// 	else
// 		return (0);
// }

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

// -- test code --
// #include <stdio.h>
// #include <ctype.h>

// int main(void){
// 	int	ascii_num = 0;
// 	printf("ft_isalnum : Test starts!\n");
// 	// 47 : /
// 	ascii_num = 47;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalnum(ascii_num) != ft_isalnum(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 48 : 0
// 	ascii_num = 48;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalnum(ascii_num) != ft_isalnum(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 57 : 9
// 	ascii_num = 57;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalnum(ascii_num) != ft_isalnum(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 58 : :
// 	ascii_num = 58;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalnum(ascii_num) != ft_isalnum(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 64 : @
// 	ascii_num = 64;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalnum(ascii_num) != ft_isalnum(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 65 : A
// 	ascii_num = 65;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalnum(ascii_num) != ft_isalnum(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 90 : Z
// 	ascii_num = 90;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalnum(ascii_num) != ft_isalnum(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 91 : [
// 	ascii_num = 65;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalnum(ascii_num) != ft_isalnum(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 96 : `
// 	ascii_num = 96;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalnum(ascii_num) != ft_isalnum(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 97 : a
// 	ascii_num = 97;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalnum(ascii_num) != ft_isalnum(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 122 : z
// 	ascii_num = 122;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalnum(ascii_num) != ft_isalnum(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 123 : {
// 	ascii_num = 123;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalnum(ascii_num) != ft_isalnum(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	printf("ft_isalnum : \033[32mOK!\033[0m\n");
// 	return (1);
// }
