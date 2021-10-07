#include <string.h>

int	ft_isdigit(int c)
{
	if ('0' <= (unsigned char)c && (unsigned char)c <= '9')
		return (1);
	else
		return (0);
}

// -- test code --
// #include <stdio.h>
// #include <ctype.h>

// int main(void){
// 	int	ascii_num = 0;
// 	printf("ft_isdigit : Test starts!\n");
// 	// 47 : /
// 	ascii_num = 47;
// 	printf("Case : %c\n", ascii_num);
// 	if (isdigit(ascii_num) != ft_isdigit(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 48 : 0
// 	ascii_num = 48;
// 	printf("Case : %c\n", ascii_num);
// 	if (isdigit(ascii_num) != ft_isdigit(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 57 : 9
// 	ascii_num = 57;
// 	printf("Case : %c\n", ascii_num);
// 	if (isdigit(ascii_num) != ft_isdigit(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 58 : :
// 	ascii_num = 58;
// 	printf("Case : %c\n", ascii_num);
// 	if (isdigit(ascii_num) != ft_isdigit(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	printf("ft_isdigit : \033[32mOK!\033[0m\n");
// 	return (1);
// }
