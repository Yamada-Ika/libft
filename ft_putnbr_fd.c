/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 21:35:45 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 00:09:06 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_helper(int n, int fd, int offset)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (0 <= n && n <= 9)
	{
		ft_putchar_fd(n + '0', fd);
	}
	else
	{
		ft_putnbr_fd_helper(n / 10, fd, offset);
		if (n == -1 * (INT_MIN + 1))
			ft_putchar_fd(n % 10 + offset + '0', fd);
		else
			ft_putchar_fd(n % 10 + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
		ft_putnbr_fd_helper(++n, fd, 1);
	else
		ft_putnbr_fd_helper(n, fd, 0);
}

// -- test code --
// int main(void){
	// ft_putnbr_fd(100, 1);
	// ft_putchar_fd('\n', 1);
	// ft_putnbr_fd(-123, 1);
	// ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(INT_MIN, 1);
// 	ft_putchar_fd('\n', 1);
// }
