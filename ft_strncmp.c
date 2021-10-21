/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:17 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/21 15:48:13 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char*s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*cu_s1;
	const unsigned char	*cu_s2;

	cu_s1 = (const unsigned char *)s1;
	cu_s2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	i = 0;
	while (cu_s1[i] == cu_s2[i] && i <= n - 1)
	{
		i++;
	}
	return (cu_s1[i] - cu_s2[i]);
}

// RETURN VALUES
//      The strcmp() and strncmp() functions return an
//      integer greater than, equal to, or less than 0,
//      according as the string s1 is greater than, equal
//      to, or less than the string s2.  The comparison
//      is done using unsigned characters, so that `\200'
//      is greater than `\0'.

// SEE ALSO
//      bcmp(3), memcmp(3), strcasecmp(3), strcoll(3),
//      strxfrm(3), wcscmp(3)

// STANDARDS
//      The strcmp() and strncmp() functions conform to
//      ISO/IEC 9899:1990 (``ISO C90'').

// (END)

// -- test code --
// #include <stdio.h>

// int main(void){
// 	char s1[] = "\200", s2[] = "\0";
// 	size_t n = 2;

// 	printf("%d\n", s1[0]);
// 	printf("strncmp :    %d\n", strncmp(s1, s2, n));
// 	printf("ft_strncmp : %d\n", ft_strncmp(s1, s2, n));
// }
