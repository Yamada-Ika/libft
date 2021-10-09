/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:08:13 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/08 20:12:21 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static char	*helper(const char *s1, const char *s2, size_t len, int i)
{
	int		j;
	int		found_first_i;
	char	*found_at;

	j = 0;
	while (s1[i] != '\0' && len-- > 0)
	{
		if (s1[i] == s2[j])
		{
			if (j == 0)
				found_first_i = i;
			j++;
			if (s2[j] == '\0')
			{
				found_at = (char *)&s1[found_first_i];
				break ;
			}
		}
		else
			j = 0;
		i++;
	}
	return (found_at);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*found_at;

	if (needle[0] == '\0')
		return ((char *)haystack);
	found_at = NULL;
	found_at = helper(haystack, needle, len, 0);
	return (found_at);
}

// -- test code --
#include <stdio.h>

int main(void){
	char haystack[] = "see FF your FF return FF now FF";
	char needle[] = "FF";
	size_t len;

	len = strlen(haystack);
	// printf("strnstr    : %p should be equal to %p\n", 
	// 	strnstr(haystack, needle, len), &haystack[4]);
	printf("strnstr    : %s\n",strnstr(haystack, needle, len));
	// printf("ft_strnstr : %p should be equal to %p\n", 
	// 	ft_strnstr(haystack, needle, len), &haystack[4]);
	// printf("ft_strnstr : %s\n",strnstr(haystack, needle, len));
}
