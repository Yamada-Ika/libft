#include <string.h>

int	ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
		return (1);
	else
		return (0);
}

// -- test code --
// #include <stdio.h>
// #include <ctype.h>

// int main(void) {
// 	int	ascii_num = 0;
// 	printf("ft_isprint : Test starts!\n");
// 	// 31 : Unit Separator
// 	ascii_num = 31;
// 	printf("Case : %02x\n", ascii_num);
// 	if (isprint(ascii_num) != ft_isprint(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 32 : space
// 	ascii_num = 32;
// 	printf("Case : %02x\n", ascii_num);
// 	if (isprint(ascii_num) != ft_isprint(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 126 : Delete
// 	ascii_num = 126;
// 	printf("Case : %02x\n", ascii_num);
// 	if (isprint(ascii_num) != ft_isprint(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 127 : Delete
// 	ascii_num = 127;
// 	printf("Case : %02x\n", ascii_num);
// 	if (isprint(ascii_num) != ft_isprint(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	printf("ft_isprint : \033[32mOK!\033[0m\n");
// 	return (1);
// }
