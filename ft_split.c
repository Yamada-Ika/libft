/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:47 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/13 22:02:03 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**alloc_helper(char const *s, char c, size_t split_num, size_t word_len)
{
	const char	*s_ptr;
	char	*split_str;
	char	**split_strs;

	if (*s == '\0')
		return ((char **)malloc(sizeof(char *) * (split_num + 1)));
	while (*s == c && *s != '\0')
	{
		s++;
		if (*s == '\0')
			return ((char **)malloc(sizeof(char *) * (split_num + 1)));
	}
	s_ptr = s;
	while (*s != c && *s != '\0')
	{
		word_len++;
		s++;
	}
	split_num++;
	split_str = ft_substr(s_ptr, 0, word_len);
	// printf("split_str %s, word_len %zu\n", split_str, word_len);
	if (split_str == NULL)
		return (NULL);
	split_strs = alloc_helper(s, c, split_num, 0);
	// printf("split_num %zu\n", split_num);
	if (split_strs == NULL)
		free(split_str);
	else
		split_strs[split_num - 1] = split_str;
	return (split_strs);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;

	if (s == NULL || (*s == '\0' && c == '\0'))
	{
		ret = (char **)malloc(sizeof(char));
		ret[0] = NULL;
		return (ret);
	}
	return (alloc_helper(s, c, 0, 0));
}

// // test
// #include <stdio.h>
// int main(void) {
// 	char **ret;
// 	int i = 0;

	// // // normal
	// ret = ft_split("aa,bb,cc", ',');
	// while (ret[i] != NULL)
	// {
	// 	printf("ret[%d] = %s\n", i, ret[i]);
	// 	i++;
	// }
	// free(ret);

	// sep = '\0'
	// ret = ft_split("aa,bb,cc", '\0');
	// while (ret[i] != NULL)
	// {
	// 	printf("ret[%d] = %s\n", i, ret[i]);
	// 	i++;
	// }
	// free(ret);

	// // tester case 1
	// ret = ft_split("split  ||this|for|me|||||!|", '|');
	// while (ret[i] != NULL)
	// {
	// 	printf("ret[%d] = %s\n", i, ret[i]);
	// 	for (int j = 0; j < strlen(ret[i]) + 1; j++) {
	// 		printf("%02x ", ret[i][j]);
	// 	}
	// 	putchar('\n');
	// 	i++;
	// }
	// free(ret);

	// // tester case 2
	// ret = ft_split("split  ||this|for|me|||||!", '|');
	// while (ret[i] != NULL)
	// {
	// 	printf("ret[%d] = %s\n", i, ret[i]);
	// 	for (int j = 0; j < strlen(ret[i]) + 1; j++) {
	// 		printf("%02x ", ret[i][j]);
	// 	}
	// 	putchar('\n');
	// 	i++;
	// }
	// free(ret);

	// tester case 3
// 	char	**expected = (char*[6]){"split", "this", "for", "me", "!", NULL};
// 	ret = ft_split("      split       this for   me  !       ", ' ');
// 	while (ret[i] != NULL)
// 	{
// 		printf("ret[%d] = %s\n", i, ret[i]);
// 		for (int j = 0; j < strlen(ret[i]) + 1; j++) {
// 			printf("%02x ", ret[i][j]);
// 		}
// 		putchar('\n');
// 		printf("strcmp(expected[%d], ret[%d]) : %d\n", i, i, strcmp(expected[i], ret[i]));
// 		i++;
// 	}
// 	free(ret);
// }
