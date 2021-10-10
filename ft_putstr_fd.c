/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:47:43 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/10 23:47:43 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char const *c, int fd)
{
	if (c == NULL)
		;
	else
		write(fd, (const void *)c, ft_strlen(c));
}

// -- test code --
// int main(void){
// 	ft_putstr_fd("hello, world!", 1);
// 	ft_putstr_fd(NULL, 1);
// }
