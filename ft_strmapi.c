#include <string.h>
#include <stdlib.h>
#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	count;

// 	count = 0;
// 	while (s[count] != '\0')
// 		count++;
// 	return (count);
// }

const char	*createNullStr(size_t size)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(size_t) * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (size-- > 0)
		str[i++] = '\0';
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*new_str;

	new_str = createNullStr(ft_strlen(s) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	return (new_str);
}

// -- test code --
// #include <stdio.h>
// #include <string.h>

// char	index_plus_char(unsigned int index, char c)
// {
// 	return (c + index);
// }

// int main(void) {
// 	char str[] = "Hello, world!";
// 	char *return_value;

// 	printf("str =          %s\n", str);
// 	return_value = ft_strmapi(str, index_plus_char);
// 	printf("retrun value = %s\n", return_value);
// 	free(return_value);
// }
