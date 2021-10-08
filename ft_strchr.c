#include <string.h>

//  char *
//  strchr(const char *s, int c);

// 	DESCRIPTION
//  The strchr() function locates the first occurrence of c 
//  (converted to a char) in the string pointed to by
//  s.  The terminating null character is considered to be 
//  part of the string; therefore if c is `\0', the
//  functions locate the terminating `\0'.

//  The strrchr() function is identical to strchr(), except 
//  it locates the last occurrence of c.

// 	RETURN VALUES
//  The functions strchr() and strrchr() return a pointer to 
//  the located character, or NULL if the character
//  does not appear in the string.

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*c_located_at;

	c_located_at = NULL;
	i = 0;
	while (1)
	{
		if (s[i] == (char)c)
		{
			c_located_at = (char *)&s[i];
			break ;
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (c_located_at);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s[] = "0123", c = '2';

// 	printf("strchr :    %p\n", strchr(s, c));
// 	printf("ft_strchr : %p\n", ft_strchr(s, c));
// }
