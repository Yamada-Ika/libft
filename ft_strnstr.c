#include <string.h>

//  The strnstr() function locates the first occur-
//  rence of the null-terminated string needle in the
//  string haystack, where not more than len charac-
//  ters are searched.  Characters that appear after
//  a `\0' character are not searched.  Since the
//  strnstr() function is a FreeBSD specific API, it
//  should only be used when portability is not a
//  concern.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		found_first_i;
	int		j;
	char	*found_at;

	if (needle[0] == '\0')
		return ((char *)haystack);
	found_at = NULL;
	i = 0;
	j = 0;
	while (haystack[i] != '\0' && len-- > 0)
	{
		if (haystack[i] == needle[j])
		{
			if (j == 0)
				found_first_i = i;
			j++;
			if (needle[j] == '\0')
				found_at = (char *)&haystack[found_first_i];
		}
		else
			j = 0;
		i++;
	}
	return (found_at);
}

// RETURN VALUES
//      If needle is an empty string, haystack is
//      returned; if needle occurs nowhere in haystack,
//      NULL is returned; otherwise a pointer to the
//      first character of the first occurrence of needle
//      is returned.

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char haystack[] = "0123456789", needle[] = "4";
// 	size_t len;

// 	len = 4;
// 	printf("strnstr :    %p should be equal to %p\n", 
// 		strnstr(haystack, needle, len), &haystack[4]);
// 	printf("ft_strnstr : %p should be equal to %p\n", 
// 		ft_strnstr(haystack, needle, len), &haystack[4]);
// }
