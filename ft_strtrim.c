/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:23:10 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 15:36:46 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	forward_trim_strlen(char const *s, char const *set)
{
	size_t	trim_count;
	size_t	old_trim_count;
	size_t	i;
	size_t	set_len;

	set_len = ft_strlen(set);
	trim_count = 0;
	old_trim_count = 0;
	while (*s != '\0')
	{
		i = -1;
		while (++i < set_len)
		{
			if (*s == set[i])
			{
				trim_count++;
				break;
			}
		}
		if (trim_count == old_trim_count)
			return (trim_count);
		old_trim_count = trim_count;
		s++;
	}
	return (trim_count);
}

static size_t	backward_trim_strlen(char const *s, char const *set)
{
	size_t	trim_count;
	size_t	old_trim_count;
	size_t	i;
	size_t	j;
	size_t	set_len;
	size_t	s_len;

	set_len = ft_strlen(set);
	s_len = ft_strlen(s);
	trim_count = 0;
	old_trim_count = 0;
	j = 0;
	while (j < s_len)
	{
		i = -1;
		while (++i < set_len)
		{
			if (s[s_len - (j + 1)] == set[i])
			{
				trim_count++;
				break;
			}
		}
		if (trim_count == old_trim_count)
			return (trim_count);
		old_trim_count = trim_count;
		j++;
	}
	return (trim_count);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trimmed_str;
	size_t	trim_strlen;
	size_t	forward_trim_len;
	size_t	backward_trim_len;
	size_t	s_len;
	size_t	i;

	if (s == NULL || set == NULL)
		return (NULL);
	forward_trim_len = forward_trim_strlen(s, set);
	backward_trim_len = backward_trim_strlen(s, set);
	s_len = ft_strlen(s);
	if (forward_trim_len + backward_trim_len < s_len)
		trim_strlen = s_len - (forward_trim_len + backward_trim_len);
	else
		trim_strlen = 0;
	trimmed_str = (char *)malloc(sizeof(char) * (trim_strlen + 1));
	if (trimmed_str == NULL)
		return (NULL);
	i = 0;
	while (i < trim_strlen)
	{
		trimmed_str[i] = s[forward_trim_len + i];
		i++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
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

	// // <- teraterm case ->
	// trimed_s = ft_strtrim(s1, set1);
	// printf("trimed_s = %s\n", trimed_s);
	// for (int i = 0; i < strlen("#include <stdio.h>"); i++)
	// 	printf("%02x ", trimed_s[i]);
	// putchar('\n');
	// free(trimed_s);

	// <- teraterm case ->
// 	trimed_s = ft_strtrim(s2, set2);
// 	printf("trimed_s = %s\n", trimed_s);
// 	for (int i = 0; i < strlen("#include <stdio.h>"); i++)
// 		printf("%02x ", trimed_s[i]);
// 	putchar('\n');
// 	free(trimed_s);
// }
