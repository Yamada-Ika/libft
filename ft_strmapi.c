/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:48:21 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/21 10:33:03 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*new_str;

	if (s == NULL || (*f) == NULL)
		return (NULL);
	new_str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	return (new_str);
}

// -- test code --
// #include <stdio.h>
// #include <string.h>

// char	index_plus_char(unsigned int index, char c)
// {
// 	return (c + index);
// }

// int main(void) {
// 	char str[] = "Hello, world!";
// 	char *return_value;

// 	printf("str =          %s\n", str);
// 	return_value = ft_strmapi(str, index_plus_char);
// 	printf("retrun value = %s\n", return_value);
// 	free(return_value);
// }
