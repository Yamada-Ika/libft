#include <string.h>

int	ft_isalpha(int c)
{
	if (('a' <= (char)c && (char)c <= 'z')
		|| ('A' <= (char)c && (char)c <= 'Z'))
		return (1);
	else
		return (0);
}

// Test case

// #include <stdio.h>
// #include <ctype.h>

// int main(void){
// 	int	ascii_num = 0;
// 	printf("ft_isalpha : Test starts!\n");
// 	// 64 : @
// 	ascii_num = 64;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 65 : A
// 	ascii_num = 65;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 90 : Z
// 	ascii_num = 90;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 91 : [
// 	ascii_num = 65;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 96 : `
// 	ascii_num = 96;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 97 : a
// 	ascii_num = 97;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 122 : z
// 	ascii_num = 122;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	// 123 : {
// 	ascii_num = 123;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d \033[31mWRONG!\033[0m\n", ascii_num);
// 		return (-1);
// 	}
// 	printf("ft_isalpha : \033[32mOK!\033[0m\n");
// 	return (1);
// }