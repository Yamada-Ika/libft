/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:47 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/13 21:39:00 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// static void	*mem_free(char **strs, int i, size_t *char_nums)
// {
// 	if (i < 0)
// 		free(strs);
// 	else
// 	{
// 		while (i > 0)
// 		{
// 			free(strs[i]);
// 			i--;
// 		}
// 		free(char_nums);
// 	}
// 	return (NULL);
// }

// // Get the number of characters in a word that has been split.
// static size_t	*get_char_nums(char const *s, char c, size_t split_num)
// {
// 	size_t	*char_nums;
// 	size_t	word_count;
// 	size_t	i;

// 	char_nums = (size_t *)malloc(sizeof(size_t) * split_num);
// 	if (char_nums == NULL)
// 		return (NULL);
// 	word_count = 0;
// 	i = -1;
// 	while (1)
// 	{
// 		if (*s != c && *s != '\0')
// 			word_count++;
// 		else
// 		{
// 			if (word_count > 0)
// 				char_nums[++i] = word_count;
// 			word_count = 0;
// 		}
// 		if (*s == '\0')
// 			break ;
// 		s++;
// 	}
// 	return (char_nums);
// }

// // Get the number of words obtained when the string s is divided by c.
// static size_t	get_split_num(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	split_num;

// 	split_num = 0;
// 	i = 0;
// 	while (*s != '\0')
// 	{
// 		if (*s != c)
// 		{
// 			if (i == 0)
// 				split_num++;
// 			i++;
// 		}
// 		else
// 			i = 0;
// 		s++;
// 	}
// 	return (split_num);
// }

// // Create a two-dimensinal array
// static char	**alloc_mem(char const *s, char c)
// {
// 	char	**strs;
// 	size_t	*char_nums;
// 	size_t	split_num;
// 	size_t	i;

// 	split_num = get_split_num(s, c);
// 	strs = (char **)malloc(sizeof(char) * (split_num + 1));
// 	if (strs == NULL)
// 		return (NULL);
// 	char_nums = get_char_nums(s, c, split_num);
// 	if (char_nums == NULL)
// 		return (mem_free(strs, -1, NULL));
// 	i = -1;
// 	while (++i < split_num)
// 	{
// 		strs[i] = (char *)malloc(sizeof(char) * (char_nums[i] + 1));
// 		if (strs[i] == NULL)
// 			return (mem_free(strs, --i, char_nums));
// 	}
// 	strs[i] = NULL;
// 	free(char_nums);
// 	return (strs);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**strs;
// 	char	**strsPointTo;
// 	size_t	i;

// 	if (s == NULL)
// 		return (NULL);
// 	strs = alloc_mem(s, c);
// 	if (strs == NULL)
// 		return (NULL);
// 	strsPointTo = strs;
// 	while (*strs != NULL)
// 	{
// 		i = 0;
// 		while (*s == c)
// 			s++;
// 		while (*s != c)
// 		{
// 			(*strs)[i] = *s;
// 			i++;
// 			s++;
// 		}
// 		(*strs)[i] = '\0';
// 		strs++;
// 	}
// 	return (strsPointTo);
// }

static char	**alloc_helper(char const *s, char c, size_t split_num, size_t word_len)
{
	const char	*s_ptr;
	char	*split_str;
	char	**split_strs;

	// printf("*s = %02x\n", *s);
	if (*s == '\0')
		return ((char **)malloc(sizeof(char *) * (split_num + 1)));
	while (*s == c && *s != '\0')
	{
		s++;
		if (*s == '\0')
		{
			// printf("*s = %02x\n", *s);
			return ((char **)malloc(sizeof(char *) * (split_num + 1)));
		}
	}
	s_ptr = s;
	while (*s != c && *s != '\0')
	{
		word_len++;
		s++;
	}
	split_num++;
	split_str = ft_substr(s_ptr, 0, word_len);
	split_strs = alloc_helper(s, c, split_num, 0);
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

// 	// // normal
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

// 	// tester case 3
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

// static char	**str_alloc(char const *s, char c)
// {
// 	size_t	split_num;
// 	size_t	word_len;
// 	size_t	i;
// 	char	**split_strs;

// 	split_strs = alloc_helper(s, c, 0, 0);
// 	return (split_strs);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**split_strs;
// 	size_t	i;

// 	if (s == NULL)
// 		return (NULL);
// 	split_strs = str_alloc(s, c);
// 	if (split_strs == NULL)
// 		return (NULL);
// 	return (split_strs);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char s[] = "split  ||this|for|me|||||!|";
// 	// char s1[] = "      split       this for   me  !       ";
// 	char **return_value;
// 	int i;

// 	// <- tester ->
// 	printf("s = %s, c = %c\n", s, '|');
// 	return_value = ft_split(s, '|');
// 	i = 0;
// 	while (i < 6) {
// 		printf("return_value[%d] = %s\n", i, return_value[i]);
// 		if (return_value[i] == NULL)
// 			break;
// 		for (unsigned long j = 0; j < strlen(return_value[i]) + 1; j++)
// 			printf("%02x ", return_value[i][j]);
// 		putchar('\n');
// 		i++;
// 	}
// 	// printf("NULL ended? : %p\n", return_value[i]);
// 	free(return_value);

// 	// // <- tester ->
// 	// printf("s = %s, c = %c\n", s1, ' ');
// 	// return_value = ft_split(s1, ' ');
// 	// i = 0;
// 	// while (return_value[i] != NULL) {
// 	// 	printf("return_value[%d] = %s\n", i, return_value[i]);
// 	// 	for (unsigned long j = 0; j < strlen(return_value[i]) + 1; j++)
// 	// 		printf("%02x ", return_value[i][j]);
// 	// 	putchar('\n');
// 	// 	i++;
// 	// }
// 	// printf("NULL ended? : %p\n", return_value[i]);
// 	// free(return_value);
// }
