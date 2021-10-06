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

char	*ft_strcpy(char *dst, const char *src)
{
	char	*dst_1st_address;

	dst_1st_address = dst;
	while (*src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (dst_1st_address);
}

//  char *
//  strdup(const char *s1);

//  The strdup() function allocates sufficient memory
//  for a copy of the string s1, does the copy, and
//  returns a pointer to it.  The pointer may subse-
//  quently be used as an argument to the function
//  free(3).

//  If insufficient memory is available, NULL is
//  returned and errno is set to ENOMEM.

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (s2 == NULL)
		return (NULL);
	return (ft_strcpy(s2, s1));
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s1[] = "hello", *s2, *ft_s2;
// 	int len = 6;

// 	s2 = strdup(s1);
// 	printf("strdup : %s\n", s2);
// 	for (int i = 0; i < len; i++)
// 		printf("%02x %c\n", s2[i], s2[i]);
// 	putchar('\n');

// 	ft_s2 = strdup(s1);
// 	printf("ft_strdup : %s\n", ft_s2);
// 	for (int i = 0; i < len; i++)
// 		printf("%02x %c\n", ft_s2[i], ft_s2[i]);
// 	putchar('\n');
// }
