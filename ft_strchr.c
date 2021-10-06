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
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			c_located_at = (char *)&s[i];
			break ;
		}	
		i++;
	}
	return (c_located_at);
}

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s[] = "0123456789", c = 'z';

// 	printf("strchr :    %p address of c in s : %p\n", 
// 		strchr(s, c), &s[c ? c - '0' : 10]);
// 	printf("ft_strchr : %p address of c in s : %p\n", 
// 		ft_strchr(s, c), &s[c ? c - '0' : 10]);
// }
