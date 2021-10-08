#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include "../libft.h"

int main(void) {
	int i;

	i = -1;
	printf("isalpha    : %d\n", isalpha(i));
	printf("ft_isalpha : %d\n", ft_isalpha(i));
}

// bool isalpha_test(void);

// int main(void){
// 	if (isalpha_test())
// 		printf("ft_isalpha : \033[32mOK!\033[0m\n");
// 	else
// 		printf("ft_isalpha : \033[31mWRONG!\033[0m\n");
// }

// bool isalpha_test(void) {
// 	int	ascii_num = 0;
// 	printf("ft_isalpha : Test starts!\n");
// 	// 64 : @
// 	ascii_num = 64;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d is not correct\n", ascii_num);
// 		return (false);
// 	}
// 	// 65 : A
// 	ascii_num = 65;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d is not correct\n", ascii_num);
// 		return (false);
// 	}
// 	// 90 : Z
// 	ascii_num = 90;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d is not correct\n", ascii_num);
// 		return (false);
// 	}
// 	// 91 : [
// 	ascii_num = 65;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d is not correct\n", ascii_num);
// 		return (false);
// 	}
// 	// 96 : `
// 	ascii_num = 96;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d is not correct\n", ascii_num);
// 		return (false);
// 	}
// 	// 97 : a
// 	ascii_num = 97;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d is not correct\n", ascii_num);
// 		return (false);
// 	}
// 	// 122 : z
// 	ascii_num = 122;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d is not correct\n", ascii_num);
// 		return (false);
// 	}
// 	// 123 : {
// 	ascii_num = 123;
// 	printf("Case : %c\n", ascii_num);
// 	if (isalpha(ascii_num) != ft_isalpha(ascii_num)) {
// 		fprintf(stderr, "Case of %d is not correct\n", ascii_num);
// 		return (false);
// 	}
// 	return (true);
// }