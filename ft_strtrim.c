/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:23:10 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/16 17:46:46 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	forward_trim_count(char const *s, char const *set)
{
	size_t	trim_count;

	trim_count = 0;
	while (1)
	{
		if (ft_strchr(set, (int)*s) == NULL)
			return (trim_count);
		trim_count++;
		if (*s == '\0')
			return (trim_count);
		s++;
	}
}

static size_t	backward_trim_count(char const *s, char const *set)
{
	size_t	trim_count;
	size_t	s_len;

	trim_count = 0;
	s_len = ft_strlen(s);
	if (s_len == 0)
		return (trim_count);
	s += s_len - 1;
	while (s_len-- > 0)
	{
		if (ft_strchr(set, (int)*s) == NULL)
			return (trim_count);
		trim_count++;
		s--;
	}
	return (trim_count);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trim_str;
	size_t	trim_strlen;
	size_t	forward_trim_len;
	size_t	backward_trim_len;
	size_t	s_len;

	if (s == NULL || set == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	forward_trim_len = forward_trim_count(s, set);
	backward_trim_len = backward_trim_count(s, set);
	trim_strlen = s_len - (forward_trim_len + backward_trim_len);
	if (forward_trim_len + backward_trim_len > s_len)
		trim_strlen = 0;
	trim_str = (char *)malloc(sizeof(char) * (trim_strlen + 1));
	if (trim_str == NULL)
		return (NULL);
	ft_strlcpy(trim_str, s + forward_trim_len, trim_strlen + 1);
	return (trim_str);
}

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char s[] = "1234AAA22331122";
// 	char set[] = "1234";
// 	char s1[] = "\t'#9' #include <stdio.h>\t'#9'";
// 	char set1[] = "\t";
// 	char s2[] = "  \t \t \n   \n\n\n\t";
// 	char set2[] = " \n\t";
// 	char *trimed_s;

	// // <- nortion case ->
	// trimed_s = ft_strtrim(s, set);
	// printf("trimed_s = %s\n", trimed_s);
	// for (int i = 0; i < 4; i++)
	// 	printf("%02x ", trimed_s[i]);
	// putchar('\n');
	// free(trimed_s);

	// // <- fully trimmed ->
	// trimed_s = ft_strtrim(s2, set2);
	// printf("trimed_s = %s\n", trimed_s);
	// for (int i = 0; i < 4; i++)
	// 	printf("%02x ", trimed_s[i]);
	// putchar('\n');
	// free(trimed_s);

	// // <- teraterm case ->
	// trimed_s = ft_strtrim(s1, set1);
	// printf("trimed_s = %s\n", trimed_s);
	// for (int i = 0; i < strlen("#include <stdio.h>"); i++)
	// 	printf("%02x ", trimed_s[i]);
	// putchar('\n');
	// free(trimed_s);

	// // <- teraterm case ->
	// trimed_s = ft_strtrim(s2, set2);
	// printf("trimed_s = %s\n", trimed_s);
	// for (int i = 0; i < strlen("#include <stdio.h>"); i++)
	// 	printf("%02x ", trimed_s[i]);
	// putchar('\n');
	// free(trimed_s);
// }
