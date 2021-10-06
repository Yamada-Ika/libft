#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

char	*ft_strnew(size_t size)
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_str = ft_strnew(s1_len + s2_len + 1);
	if (joined_str == NULL)
		return (NULL);
	i = 0;
	while (i < s1_len + s2_len)
	{
		if (i < s1_len)
			joined_str[i] = s1[i];
		else
			joined_str[i] = s2[i - s1_len];
		i++;
	}
	joined_str[i] = '\0';
	return (joined_str);
}

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char s1[] = "Hello", s2[] = ", world!";
// 	char *joined;

// 	joined = ft_strjoin(s1, s2);
// 	printf("s1 + s2 = %s\n", joined);
// 	free(joined);
// }
