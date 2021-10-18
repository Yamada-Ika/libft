/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:23:10 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/18 12:58:47 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*head;
	char const	*tail;

	if (s1 == NULL || set == NULL)
		return (NULL);
	head = s1;
	while (ft_strchr(set, (int)*head))
		head++;
	tail = s1 + ft_strlen(s1);
	while (ft_strchr(set, (int)*tail) && head <= tail)
		tail--;
	printf("head : %p tail : %p\n", head, tail);
	return (ft_substr(head, 0, tail - head + 1));
}

// -- test code --
// #include <stdio.h>

// int main(void) {
// 	char s[] = "1234AAA22331122";
// 	char set[] = "1234";
// 	char s1[] = "\t'#9' #include <stdio.h>\t'#9'";
// 	char set1[] = "\t";
// 	char s2[] = "  \t \t \n   \n\n\n\t";
// 	char set2[] = " \n\t";
// 	char *trimed_s;

	// // <- nortion case ->
	// trimed_s = ft_strtrim(s, set);
	// printf("trimed_s = %s\n", trimed_s);
	// for (int i = 0; i < 4; i++)
	// 	printf("%02x ", trimed_s[i]);
	// putchar('\n');
	// free(trimed_s);

	// // <- fully trimmed ->
	// trimed_s = ft_strtrim(s2, set2);
	// printf("trimed_s = %s\n", trimed_s);
	// for (int i = 0; i < 4; i++)
	// 	printf("%02x ", trimed_s[i]);
	// putchar('\n');
	// free(trimed_s);

	// // <- teraterm case ->
	// trimed_s = ft_strtrim(s1, set1);
	// printf("trimed_s = %s\n", trimed_s);
	// for (int i = 0; i < strlen("#include <stdio.h>"); i++)
	// 	printf("%02x ", trimed_s[i]);
	// putchar('\n');
	// free(trimed_s);

	// // <- teraterm case ->
	// trimed_s = ft_strtrim(s2, set2);
	// printf("trimed_s = %s\n", trimed_s);
	// for (int i = 0; i < strlen("#include <stdio.h>"); i++)
	// 	printf("%02x ", trimed_s[i]);
	// putchar('\n');
	// free(trimed_s);
// }
