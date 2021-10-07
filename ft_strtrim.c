#include <string.h>
#include <stdlib.h>
#include "libft.h"

// char	*ft_strnew(size_t size)
// {
// 	char	*str;
// 	int		i;

// 	str = (char *)malloc(sizeof(size_t) * size);
// 	if (str == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (size-- > 0)
// 		str[i++] = '\0';
// 	return (str);
// }

const size_t	trimedStrLen(char const *s)
{
	size_t	trimed_str_len;

	trimed_str_len = 0;
	while (*s != '\0')
	{
		if (!(*s == ' ' || *s == '\n' || *s == '\t'))
			trimed_str_len++;
		s++;
	}
	return (trimed_str_len);
}

char	*ft_strtrim(char const *s)
{
	char	*trimed_str;
	char	*trimed_str_1st_ptr;

	trimed_str = (char *)malloc(sizeof(char) * ((size_t)trimedStrLen(s) + 1));
	if (trimed_str == NULL)
		return (NULL);
	trimed_str_1st_ptr = trimed_str;
	while (*s != '\0')
	{
		if (!(*s == ' ' || *s == '\n' || *s == '\t'))
			*trimed_str++ = *s;
		s++;
	}
	*trimed_str = '\0';
	return (trimed_str_1st_ptr);
}

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
