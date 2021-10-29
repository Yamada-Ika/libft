/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_bin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:51:35 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/28 21:08:11 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_bin(int n)
{
	char	*bin;
	int		i;

	bin = ft_calloc(INT_BIT + 1, sizeof(char));
	if (bin == NULL)
		return (NULL);
	i = 0;
	while (i < INT_BIT)
	{
		bin[i] = (1 & (n >> i)) + '0';
		i++;
	}
	return (ft_strrev(bin));
}

// int main(void)
// {
// 	int n = -100;
// 	char *ret = ft_itoa_bin(n);
// 	char buf[50];
// 	printf("%x\n", n);
// 	printf("%p\n", &n);
// 	printf("%s\n", ret);
// 	snprintf(buf, 50, "echo 'obase=2; ibase=10; %d' | bc", n);
// 	system(buf);
// 	free(ret);
// }
