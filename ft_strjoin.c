/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 02:46:03 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/14 10:36:16 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	char	*joined_str_ptr;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_str = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (joined_str == NULL)
		return (NULL);
	joined_str_ptr = joined_str;
	joined_str = ft_memcpy(joined_str, s1, s1_len);
	joined_str = ft_memcpy(joined_str + s1_len, s2, s2_len);
	joined_str_ptr[s1_len + s2_len] = '\0';
	return (joined_str_ptr);
}

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char s1[] = "", s2[] = "";
// 	char *joined;

// 	joined = ft_strjoin(s1, s2);
// 	printf("s1 + s2 = %s\n", joined);
// 	free(joined);
// }
