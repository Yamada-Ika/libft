/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:46:12 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 00:01:16 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

// -- test code --
// #include <stdio.h>
// #include <ctype.h>

// int main(void){
// 	int	ascii_num = 0;
// 	printf("ft_isascii : Test starts!\n");
// 	// ascii code : 0 <= n <= 127
// 	ascii_num = -1;
// 	printf("Case : %d\n", ascii_num);
// 	if (isascii(ascii_num) != ft_isascii(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	ascii_num = 127;
// 	printf("Case : %d\n", ascii_num);
// 	if (isascii(ascii_num) != ft_isascii(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	ascii_num = 128;
// 	printf("Case : %d\n", ascii_num);
// 	if (isascii(ascii_num) != ft_isascii(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	printf("ft_isascii : \033[32mOK!\033[0m\n");
// 	return (1);
// }
