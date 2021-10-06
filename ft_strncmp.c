#include <string.h>

// SYNOPSIS
//      #include <string.h>

//      int
//      strcmp(const char *s1, const char *s2);

//      int
//      strncmp(const char *s1, const char *s2,
//          size_t n);

// int	ft_strcmp(const char *s1, const char *s2)
// {
// 	if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
// 		return (*s1 - *s2);
// 	return (ft_strcmp(++s1, ++s2));
// }

int	ft_strncmp(const char*s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0' || n == 1)
		return (*s1 - *s2);
	return (ft_strncmp(++s1, ++s2, --n));
}

// RETURN VALUES
//      The strcmp() and strncmp() functions return an
//      integer greater than, equal to, or less than 0,
//      according as the string s1 is greater than, equal
//      to, or less than the string s2.  The comparison
//      is done using unsigned characters, so that `\200'
//      is greater than `\0'.

// SEE ALSO
//      bcmp(3), memcmp(3), strcasecmp(3), strcoll(3),
//      strxfrm(3), wcscmp(3)

// STANDARDS
//      The strcmp() and strncmp() functions conform to
//      ISO/IEC 9899:1990 (``ISO C90'').

// (END)

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s1[] = "0123456789", s2[] = "1";
// 	size_t n = 2;

// 	printf("strncmp :    %d\n", strncmp(s1, s2, n));
// 	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, n));
// }
