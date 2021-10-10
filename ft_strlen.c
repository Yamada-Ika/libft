/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:48:18 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/10 23:48:18 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char string[] = "0123";

// 	printf("ft_strlen : Test starts!\n");
// 	printf("Case : %s\n", string);
// 	if (strlen(string) != ft_strlen(string)) {
// 		fprintf(stderr, "Case of %s is \033[31mWRONG!\033[0m\n", string);
// 		return (-1);
// 	}
// 	printf("ft_strlen : \033[32mOK!\033[0m\n");
// 	return (1);
// }
