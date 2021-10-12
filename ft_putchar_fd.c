/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:30 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/12 10:39:47 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	head;
	unsigned char	tail;
	unsigned char	mask1;
	unsigned char	mask2;

	if ((unsigned char)c <= 0x7f)
		write(fd, &c, sizeof(c));
	else
	{
		mask1 = 0b00111111;
		mask2 = 0b11000000;
		head = 0b11000000 | (((unsigned char)c & mask2) >> 6);
		tail = 0b10000000 | ((unsigned char)c & mask1);
		write(fd, &head, sizeof(char));
		write(fd, &tail, sizeof(char));
	}
}

// -- test code --
// int main(void){
// 	ft_putchar_fd(0x7a, 1);
// 	ft_putchar_fd(0xa9, 1);
// }
