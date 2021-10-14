/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 02:35:03 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/14 10:22:35 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len)
		len = s_len;
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (substr == NULL)
		return (NULL);
	if (s_len == 0 || s_len <= start || len == 0)
	{
		substr[0] = '\0';
		return (substr);
	}
	ft_strlcpy(substr, s + start, len + 1);
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

	// // <- normal ->
	// start = 3;
	// len = 3;
	// ret = ft_substr(s3, start, len);
	// printf("str    : %s\n", s3);
	// printf("substr : %s\n", ret);
	// printf("diff : %d\n", memcmp(ret, "345", len + 1));
	// for (int i = 0; i < len+3; i++) {
	// 	printf("substr[%d] = %02x : %c\n", i, ret[i], ret[i]);
	// }
	// free(ret);

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

	// // <- len = 0 ->
	// len = 0;
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

// 	// <- s_len >> len ->
// 	len = 100;
// 	start = 4;
// 	ret = ft_substr(s3, start, len);
// 	printf("str    : %s\n", s3);
// 	printf("substr : %s\n", ret);
// 	for (int i = 0; i < len+3; i++) {
// 		printf("substr[%d] = %02x : %c\n", i, ret[i], ret[i]);
// 	}
// 	free(ret);
// }
