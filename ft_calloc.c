/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:46:04 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 13:54:55 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc_mem;

	if (count == 0 || size == 0)
	{
		alloc_mem = malloc(1);
		if (alloc_mem == NULL)
			return (NULL);
		ft_bzero(alloc_mem, 1);
	}
	alloc_mem = malloc(size * count);
	if (alloc_mem == NULL)
		return (NULL);
	ft_bzero(alloc_mem, count);
	return (alloc_mem);
}

// test code
// #include <stdio.h>

// int main(void) {
// 	int *hoge;

// 	hoge = ft_calloc(10, sizeof(int));
// 	for (int i = 0; i < 10; i++) {
// 		printf("hoge[%d] = %d\n", i, hoge[i]);
// 	}
// 	free(hoge);
// }
