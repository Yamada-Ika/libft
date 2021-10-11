/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:08:13 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 16:36:04 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*found_at;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	found_at = NULL;
	while (*haystack != '\0' && len-- > 0)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
		{
			found_at = (char *)haystack;
			break ;
		}
		haystack++;
	}
	return (found_at);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char haystack[] = "see FF your FF return FF now FF";
// 	char needle[] = "FF";
// 	size_t len;

	// // < normal >
	// len = strlen(haystack);
	// printf("strnstr    : %p should be equal to %p\n", 
	// 	strnstr(haystack, needle, len), &haystack[4]);
	// printf("strnstr    : %s\n",strnstr(haystack, needle, len));
	// printf("ft_strnstr : %p should be equal to %p\n", 
	// 	ft_strnstr(haystack, needle, len), &haystack[4]);
	// printf("ft_strnstr : %s\n",strnstr(haystack, needle, len));

	// // < len = 0 >
	// len = 0;
	// printf("strnstr    : %p should be equal to %p\n", 
	// 	strnstr(haystack, needle, len), &haystack[4]);
	// printf("strnstr    : %s\n",strnstr(haystack, needle, len));
	// printf("ft_strnstr : %p should be equal to %p\n", 
	// 	ft_strnstr(haystack, needle, len), &haystack[4]);
	// printf("ft_strnstr : %s\n",strnstr(haystack, needle, len));

	// // < special >
	// len = 0;
	// printf("strnstr    : %p should be equal to %p\n", 
	// 	strnstr("abbbcdefg", "bbc", 20), &haystack[4]);
	// printf("strnstr    : %s\n",strnstr("abbbcdefg", "bbc", 20));
	// printf("ft_strnstr : %p should be equal to %p\n", 
	// 	ft_strnstr("abbbcdefg", "bbc", 20), &haystack[4]);
	// printf("ft_strnstr : %s\n",ft_strnstr("abbbcdefg", "bbc", 20));

	// < normal >
	// len = strlen(haystack);
	// printf("strnstr    : %p should be equal to %p\n", 
	// 	strnstr(haystack, "\0f", len), &haystack[4]);
	// printf("strnstr    : %s\n",strnstr(haystack, "\0f", len));
	// printf("ft_strnstr : %p should be equal to %p\n", 
	// 	ft_strnstr(haystack, "\0f", len), &haystack[4]);
	// printf("ft_strnstr : %s\n",strnstr(haystack, "\0f", len));
}
