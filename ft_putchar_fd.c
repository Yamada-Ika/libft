/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:30 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/21 18:17:34 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	head;
	unsigned char	tail;

	if ((unsigned char)c <= 127)
		write(fd, &c, sizeof(c));
	else
	{
		head = 0b11000000 | (((unsigned char)c & 0b11000000) >> 6);
		tail = 0b10000000 | ((unsigned char)c & 0b00111111);
		write(fd, &head, sizeof(char));
		write(fd, &tail, sizeof(char));
	}
}

// -- test code --
// int main(void){
// 	ft_putchar_fd(0x7a, 1);
// 	ft_putchar_fd(0xa9, 1);
// }

// https://ja.wikipedia.org/wiki/Unicode%E4%B8%80%E8%A6%A7_0000-0FFF
