/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:47 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 22:07:18 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*mem_free(char **strs, int i, size_t *char_nums)
{
	if (i < 0)
		free(strs);
	else
	{
		while (i > 0)
		{
			free(strs[i]);
			i--;
		}
		free(char_nums);
	}
	return (NULL);
}

// Get the number of characters in a word that has been split.
static size_t	*get_char_nums(char const *s, char c, size_t split_num)
{
	size_t	*char_nums;
	size_t	word_count;
	size_t	i;

	char_nums = (size_t *)malloc(sizeof(size_t) * split_num);
	if (char_nums == NULL)
		return (NULL);
	word_count = 0;
	i = -1;
	while (1)
	{
		if (*s != c && *s != '\0')
			word_count++;
		else
		{
			if (word_count > 0)
				char_nums[++i] = word_count;
			word_count = 0;
		}
		if (*s == '\0')
			break ;
		s++;
	}
	return (char_nums);
}

// Get the number of words obtained when the string s is divided by c.
static size_t	get_split_num(char const *s, char c)
{
	size_t	i;
	size_t	split_num;

	split_num = 0;
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			if (i == 0)
				split_num++;
			i++;
		}
		else
			i = 0;
		s++;
	}
	return (split_num);
}

// Create a two-dimensinal array
static char	**alloc_mem(char const *s, char c)
{
	char	**strs;
	size_t	*char_nums;
	size_t	split_num;
	size_t	i;

	split_num = get_split_num(s, c);
	strs = (char **)malloc(sizeof(char) * (split_num + 1));
	if (strs == NULL)
		return (NULL);
	char_nums = get_char_nums(s, c, split_num);
	if (char_nums == NULL)
		return (mem_free(strs, -1, NULL));
	i = -1;
	while (++i < split_num)
	{
		strs[i] = (char *)malloc(sizeof(char) * (char_nums[i] + 1));
		if (strs[i] == NULL)
			return (mem_free(strs, --i, char_nums));
	}
	strs[i] = NULL;
	free(char_nums);
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	**strsPointTo;
	size_t	i;

	if (s == NULL)
		return (NULL);
	strs = alloc_mem(s, c);
	if (strs == NULL)
		return (NULL);
	strsPointTo = strs;
	while (*strs != NULL)
	{
		i = 0;
		while (*s == c)
			s++;
		while (*s != c)
		{
			// *(*strs++) = *s++;
			(*strs)[i] = *s;
			i++;
			s++;
		}
		(*strs)[i] = '\0';
		strs++;
	}
	return (strsPointTo);
}

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char s[] = "split  ||this|for|me|||||!|";
// 	char s1[] = "      split       this for   me  !       ";
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

	// // <- tester ->
	// printf("s = %s, c = %c\n", s1, ' ');
	// return_value = ft_split(s1, ' ');
	// i = 0;
	// while (return_value[i] != NULL) {
	// 	printf("return_value[%d] = %s\n", i, return_value[i]);
	// 	for (unsigned long j = 0; j < strlen(return_value[i]) + 1; j++)
	// 		printf("%02x ", return_value[i][j]);
	// 	putchar('\n');
	// 	i++;
	// }
	// printf("NULL ended? : %p\n", return_value[i]);
	// free(return_value);
// }
