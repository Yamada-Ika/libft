/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:47 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/21 18:05:36 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_shift_splitted_word(char const *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	return ((char *)s);
}

static char	*ft_skip_split_char(char const *s, char c)
{
	while (*s == c && *s != '\0')
		s++;
	return ((char *)s);
}

static char	**ft_split_helper(char const *s, char c, size_t split_num)
{
	const char	*s_ptr;
	char		*split_str;
	char		**split_strs;

	s = ft_skip_split_char(s, c);
	if (*s == '\0')
	{
		split_strs = (char **)malloc(sizeof(char *) * (split_num + 1));
		if (split_strs == NULL)
			return (NULL);
		split_strs[split_num] = NULL;
		return (split_strs);
	}
	s_ptr = s;
	s = ft_shift_splitted_word(s, c);
	split_str = ft_substr(s_ptr, 0, s - s_ptr);
	if (split_str == NULL)
		return (NULL);
	split_strs = ft_split_helper(s, c, ++split_num);
	if (split_strs == NULL)
		free(split_str);
	else
		split_strs[split_num - 1] = split_str;
	return (split_strs);
}

char	**ft_split(char const *s, char c)
{
	char	**split_strs;

	if (s == NULL || (*s == '\0' && c == '\0'))
	{
		split_strs = (char **)malloc(sizeof(char));
		split_strs[0] = NULL;
		return (split_strs);
	}
	return (ft_split_helper(s, c, 0));
}

// // test

// void print_strs_str(char *str) {
// 	size_t str_len = strlen(str);

// 	for (size_t i = 0; i < str_len; i++) {
// 		printf("ret[%zu] = %02x %c\n", i, str[i], str[i]);
// 	}
// }

// #include <stdio.h>
// int main(void) {
// 	char **ret;
// 	int i = 0;

// 	// // scrapbox case
// 	ret = ft_split("\0aa\0bbb", '\0');
// 	while (ret[i] != NULL)
// 	{
// 		print_strs_str(ret[i]);
// 		i++;
// 	}
// 	free(ret);

// 	// // // normal
// 	// ret = ft_split("aa,bb,cc", ',');
// 	// while (ret[i] != NULL)
// 	// {
// 	// 	printf("ret[%d] = %s\n", i, ret[i]);
// 	// 	i++;
// 	// }
// 	// free(ret);

// 	// sep = '\0'
// 	// ret = ft_split("aa,bb,cc", '\0');
// 	// while (ret[i] != NULL)
// 	// {
// 	// 	printf("ret[%d] = %s\n", i, ret[i]);
// 	// 	i++;
// 	// }
// 	// free(ret);

// 	// // tester case 1
// 	// ret = ft_split("split  ||this|for|me|||||!|", '|');
// 	// while (ret[i] != NULL)
// 	// {
// 	// 	printf("ret[%d] = %s\n", i, ret[i]);
// 	// 	for (int j = 0; j < strlen(ret[i]) + 1; j++) {
// 	// 		printf("%02x ", ret[i][j]);
// 	// 	}
// 	// 	putchar('\n');
// 	// 	i++;
// 	// }
// 	// free(ret);

// 	// // tester case 2
// 	// ret = ft_split("split  ||this|for|me|||||!", '|');
// 	// while (ret[i] != NULL)
// 	// {
// 	// 	printf("ret[%d] = %s\n", i, ret[i]);
// 	// 	for (int j = 0; j < strlen(ret[i]) + 1; j++) {
// 	// 		printf("%02x ", ret[i][j]);
// 	// 	}
// 	// 	putchar('\n');
// 	// 	i++;
// 	// }
// 	// free(ret);

// 	// tester case 3
// 	// char	**expected = (char*[6]){"split", "this", "for", "me", "!", NULL};
// 	// ret = ft_split("      split       this for   me  !       ", ' ');
// 	// while (ret[i] != NULL)
// 	// {
// 	// 	printf("ret[%d] = %s\n", i, ret[i]);
// 	// 	for (int j = 0; j < strlen(ret[i]) + 1; j++) {
// 	// 		printf("%02x ", ret[i][j]);
// 	// 	}
// 	// 	putchar('\n');
// 	// 	i++;
// 	// }
// 	// free(ret);
// }
