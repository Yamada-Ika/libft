/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 21:35:45 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/21 20:53:07 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	is_INT_MIN;

	is_INT_MIN = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == INT_MIN)
		{
			is_INT_MIN = 1;
			n++;
		}
		n *= -1;
	}
	if (0 <= n && n <= 9)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + is_INT_MIN + '0', fd);
	}
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
