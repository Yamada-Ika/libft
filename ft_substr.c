#include <string.h>
#include <stdlib.h>
#include "libft.h"

// Function name 
// ft_substr
// Prototype 
// char *ft_substr(char const *s, unsigned int start, size_t len);
// Turn in files -
// Parameters
// #1. The string from which to create the substring.
// #2. The start index of the substring in the string
// ’s’.
// #3. The maximum length of the substring.
// Return value
// The substring. NULL if the allocation fails.
// External functs. 
// malloc
// Description 
// Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)createNullStr(len + 1);
	if (substr == NULL || s == NULL)
		return (NULL);
	if (ft_strlen(s) == 0)
		return ((char *)s);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char s[] = "0123456789";
// 	char *ret;
// 	size_t len;

// 	len = 3;
// 	ret = ft_substr(s, 3, len);
// 	printf("str    : %s\n", s);
// 	printf("substr : %s\n", ft_substr(s, 3, 3)); // > 345
// 	for (int i = 0; i < len+3; i++) {
// 		printf("substr[%d] = %02x : %c\n", i, ret[i], ret[i]);
// 	}
// 	free(ret);
// }
