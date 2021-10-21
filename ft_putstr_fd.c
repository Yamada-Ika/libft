/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:43 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/21 18:20:14 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *c, int fd)
{
	size_t	c_len;
	size_t	prev_write_len;
	char 	*tmp_c;

	if (c == NULL)
		return ;
	tmp_c = c;
	c_len = ft_strlen(tmp_c);
	prev_write_len = c_len % INT_MAX;
	write(fd, tmp_c, prev_write_len);
	tmp_c += prev_write_len;
	c_len /= INT_MAX;
	while (c_len-- > 0)
	{
		write(fd, tmp_c, INT_MAX);
		tmp_c += INT_MAX;
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
