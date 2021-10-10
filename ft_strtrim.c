#include <string.h>
#include <stdlib.h>
#include "libft.h"

// static size_t	trimmedStrLen(char const *s, char const *set)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	s_len;
// 	size_t	set_len;
// 	size_t	trimmed_word_count;
// 	int		isTrimmed;

// 	isTrimmed = 1;
// 	s_len = ft_strlen(s);
// 	set_len = ft_strlen(set);
// 	i = 0;
// 	while (i < s_len)
// 	{
// 		j = 0;
// 		while (s[i] != set[j])
// 		{
// 			if (j == set_len - 1)
// 				isTrimmed = 0;
// 			j++;
// 		}
// 		if (isTrimmed == 0)
// 			break ;
// 		trimmed_word_count++;
// 		i++;
// 	}
// }

// char	*ft_strtrim(char const *s, char const *set)
// {
// 	char	*trimed_str;
// 	size_t	*trimed_indexs;

// 	trimed_str = (char *)malloc(sizeof(char) * (trimmedStrLen(s, set) + 1));
// 	if (trimed_str == NULL)
// 		return (NULL);
// }

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char s[] = "Hel lo, w\nor\tld!"; // Hello,world! : 12 chars
// 	char *trimed_s;

// 	trimed_s = ft_strtrim(s);
// 	printf("trimed_s = %s\n", trimed_s);
// 	for (int i = 0; i < 13; i++)
// 		printf("%02x ", trimed_s[i]);
// 	putchar('\n');
// }
