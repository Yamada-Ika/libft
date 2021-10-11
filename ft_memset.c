/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:33 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 00:08:15 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	void	*bufPointTo;

	bufPointTo = buf;
	while (n-- > 0)
		*(unsigned char *)(buf++) = (unsigned char)ch;
	return (bufPointTo);
}

// -- test code --
// #include <stdio.h>

// int	main(void)
// {
// 	char	ft_buf[] = "0123456789";
// 	char	buf[] = "0123456789";
// 	int		ch = '*';
// 	void	*ft_tmp, *tmp;
// 	size_t	n;

// 	n = 5;
// 	printf("n = %zu\n", n);
// 	printf("before ft_memset : %s\n", ft_buf);
// 	ft_tmp = ft_memset(ft_buf, ch, n);
// 	printf("after  ft_memset : %s\n", ft_buf);
// 	printf("return value     : %p equal to %p\n\n", ft_tmp, ft_buf);

// 	printf("before memset : %s\n", buf);
// 	tmp = memset(buf, ch, n);
// 	printf("after  memset : %s\n", buf);
// 	printf("return value  : %p equal to %p\n\n", tmp, buf);
// }
