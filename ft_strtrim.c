/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:23:10 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/18 17:34:54 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*head;
	char const	*tail;
	size_t		trimmed_str_len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	head = s1;
	while (*head != '\0' && ft_strchr(set, (int)*head))
		head++;
	tail = s1 + ft_strlen(s1) - 1;
	while (ft_strchr(set, (int)*tail))
		tail--;
	if (*head == '\0')
		trimmed_str_len = 0;
	else
		trimmed_str_len = tail - head + 1;
	return (ft_substr(head, 0, trimmed_str_len));
}

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char *trimed_s;

// 	// <- nortion case ->
// 	trimed_s = ft_strtrim("1234aaa12", "1234");
// 	printf("trimed_s = %s\n", trimed_s);
// 	for (int i = 0; i < 4; i++)
// 		printf("%02x ", trimed_s[i]);
// 	putchar('\n');
// 	free(trimed_s);
// }
