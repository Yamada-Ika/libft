/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:43 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/12 13:56:14 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putstr_fd(char const *c, int fd)
{
	size_t	c_len;

	if (c != NULL)
	{
		c_len = ft_strlen(c);
		write(fd, c, c_len % INT_MAX);
		c_len /= INT_MAX;
		while (c_len-- > 0)
			write(fd, c, INT_MAX);
	}
}

// -- test code --
// #include <stdio.h>

// int main(void){
	// ft_putstr_fd("hello, world!", 1);
	// ft_putstr_fd(NULL, 1);
	// ft_putstr_fd("", 1);
	// write(1, "hello\n", (size_t)INT_MAX+1);
// }
