#include <string.h>

int	ft_tolower(int c)
{
	if ('A' <= (unsigned char)c && (unsigned char)c <= 'Z')
		return ((int)((unsigned char)c + ('a' - 'A')));
	else
		return (c);
}

// -- test code --
// #include <stdio.h>
// #include <ctype.h>

// int main(void){
// 	char c = 'F';

// 	printf("tolower :    %c\n", tolower(c));
// 	printf("ft_tolower : %c\n", ft_tolower(c));
// }
