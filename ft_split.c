/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:47 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 10:24:38 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	getSplitWordsNum(char const *s, char c);
static size_t	*getEachWordCounts(char const *s, char c, size_t splitWordsNum);
static char		**allocMem4StrArray(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**strArray;
	char	**strArrayPointTo;
	size_t	strIndex;

	if (s == NULL)
		return (NULL);
	strArray = allocMem4StrArray(s, c);
	if (strArray == NULL)
		return (NULL);
	strArrayPointTo = strArray;
	strIndex = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			(*strArray)[strIndex] = *s;
			strIndex++;
		}
		else
		{
			if (strIndex > 0)
				strArray++;
			strIndex = 0;
		}
		s++;
	}
	return (strArrayPointTo);
}

// Get the number of words obtained when the string s is divided by c.
static size_t	getSplitWordsNum(char const *s, char c)
{
	size_t	wordIndex;
	size_t	splitWordsNum;

	splitWordsNum = 0;
	wordIndex = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			if (wordIndex == 0)
				splitWordsNum++;
			wordIndex++;
		}
		else
			wordIndex = 0;
		s++;
	}
	return (splitWordsNum);
}

// Get the number of characters in a word that has been split.
static size_t	*getEachWordCounts(char const *s, char c, size_t splitWordsNum)
{
	size_t	*EachWordCounts;
	size_t	wordCount;
	size_t	i;

	EachWordCounts = (size_t *)malloc(sizeof(size_t) * splitWordsNum);
	if (EachWordCounts == NULL)
		return (NULL);
	wordCount = 0;
	i = -1;
	while (1)
	{
		if (*s != c && *s != '\0')
			wordCount++;
		else
		{
			if (wordCount > 0)
				EachWordCounts[++i] = wordCount;
			wordCount = 0;
		}
		if (*s == '\0')
			break ;
		s++;
	}
	return (EachWordCounts);
}

// Create a two-dimensinal array
static char	**allocMem4StrArray(char const *s, char c)
{
	char	**strArray;
	size_t	*eachWordCounts;
	size_t	splitWordsNum;
	size_t	i;

	splitWordsNum = getSplitWordsNum(s, c);
	strArray = (char **)malloc(sizeof(char) * (splitWordsNum + 1));
	if (strArray == NULL)
		return (NULL);
	eachWordCounts = getEachWordCounts(s, c, splitWordsNum);
	if (eachWordCounts == NULL)
		return (NULL);
	i = -1;
	while (++i < splitWordsNum)
	{
		strArray[i] = (char *)malloc(sizeof(char) * (eachWordCounts[i] + 1));
		if (strArray[i] == NULL)
			return (NULL);
	}
	strArray[i] = NULL;
	free(eachWordCounts);
	return (strArray);
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
// 	while (return_value[i] != NULL) {
// 		printf("return_value[%d] = %s\n", i, return_value[i]);
// 		for (unsigned long j = 0; j < strlen(return_value[i]) + 1; j++)
// 			printf("%02x ", return_value[i][j]);
// 		putchar('\n');
// 		i++;
// 	}
// 	printf("NULL ended? : %p\n", return_value[i]);
// 	free(return_value);

	// <- tester ->
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
