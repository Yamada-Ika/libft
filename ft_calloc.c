/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:46:04 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/21 15:44:35 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	mem = malloc(size * count);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, size * count);
	return (mem);
}

// test code
// #include <stdio.h>
// #include <malloc/malloc.h>

// int main(void) {
// 	void *ret;
	
// 	printf("SIZE_MAX %zu sizeof(int) %zu\n", 9223372036854775807, sizeof(char));
// 	ret = ft_calloc(9223372036854775807, sizeof(char));
// 	printf("malloc_size %zu\n", malloc_size(ret));
// 	free(ret);
// }
