/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:48:06 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/12 20:16:20 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s != NULL && s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// -- test code --
// #include <stdio.h>
// #include <string.h>

// void	print_index_char(unsigned int index, char *c)
// {
// 	*c += 1;
// 	printf("char[%u] = %c\n", index, *c);
// }

// int main(void) {
// 	char str[] = "Hello, world!";

// 	printf("str = %s\n", str);
// 	ft_striteri(str, print_index_char);
// }
