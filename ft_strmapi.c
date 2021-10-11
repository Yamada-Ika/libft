/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:48:21 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 00:11:37 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*alloc_null_str(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(size_t) * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*new_str;

	if (s == NULL)
		return (NULL);
	new_str = alloc_null_str(ft_strlen(s) + 1);
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
