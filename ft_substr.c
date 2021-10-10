/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 02:35:03 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/10 20:24:12 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static char	*alloc_null_str(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(size_t) * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	substr = (char *)alloc_null_str(len + 1);
	// printf("%zu\n", len + 1);
	if (substr == NULL || s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len == 0 || s_len <= start || len == 0)
		return (substr);
	i = 0;
	while (i < len && start + i < s_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char s[] = "";
// 	char s2[] = "0123";
// 	char s3[] = "0123456789";
// 	char s4[] = "i just want this part #############";
// 	char *ret;
// 	size_t len, start;

// 	// <- tester ->
// 	start = 5;
// 	len = 10;
// 	ret = ft_substr(s4, start, len);
// 	printf("str    : %s\n", s4);
// 	printf("substr : %s\n", ret);
// 	for (int i = 0; i < len+3; i++) {
// 		printf("substr[%d] = %02x : %c\n", i, ret[i], ret[i]);
// 	}
// 	free(ret);

	// // <- empty string ->
	// len = 3;
	// ret = ft_substr(s, 3, len);
	// printf("str    : %s\n", s);
	// printf("substr : %s\n", ret);
	// for (int i = 0; i < len+3; i++) {
	// 	printf("substr[%d] = %02x : %c\n", i, ret[i], ret[i]);
	// }
	// free(ret);

	// // <- NULL pointer ->
	// len = 3;
	// ret = ft_substr(s, 3, len);
	// printf("str    : %s\n", s);
	// printf("substr : %s\n", ret);
	// for (int i = 0; i < len+3; i++) {
	// 	printf("substr[%d] = %02x : %c\n", i, ret[i], ret[i]);
	// }
	// free(ret);

	// // <- start >= s2_len ->
	// len = 10;
	// start = 10;
	// ret = ft_substr(s2, start, len);
	// printf("str    : %s\n", s2);
	// printf("substr : %s\n", ret);
	// for (int i = 0; i < len+3; i++) {
	// 	printf("substr[%d] = %02x : %c\n", i, ret[i], ret[i]);
	// }
	// free(ret);

	// // <- normal ->
	// len = 4;
	// start = 4;
	// ret = ft_substr(s3, start, len);
	// printf("str    : %s\n", s3);
	// printf("substr : %s\n", ret);
	// for (int i = 0; i < len+3; i++) {
	// 	printf("substr[%d] = %02x : %c\n", i, ret[i], ret[i]);
	// }
	// free(ret);

	// // <- normal (access over s_len) ->
	// len = 10;
	// start = 4;
	// ret = ft_substr(s3, start, len);
	// printf("str    : %s\n", s3);
	// printf("substr : %s\n", ret);
	// for (int i = 0; i < len+3; i++) {
	// 	printf("substr[%d] = %02x : %c\n", i, ret[i], ret[i]);
	// }
	// free(ret);
// }
