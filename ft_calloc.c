/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:46:04 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 14:35:33 by iyamada          ###   ########.fr       */
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
		return (alloc_mem);
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
// 	void *ft;
// 	void *lib;
// 	size_t count;

// 	// < normal >
// 	count = 10;
// 	ft = ft_calloc(count, sizeof(int));
// 	lib = calloc(count, sizeof(int));
// 	printf("diff : %d\n", memcmp(ft, lib, count));
// 	free(ft);
// 	free(lib);

// 	// < size = 0 >
// 	count = 10;
// 	ft = ft_calloc(count, 0);
// 	lib = calloc(count, 0);
// 	printf("diff : %d\n", memcmp(ft, lib, count));
// 	free(ft);
// 	free(lib);

// 	// < count = 0 >
// 	count = 1;
// 	ft = ft_calloc(0, sizeof(int));
// 	lib = calloc(0, sizeof(int));
// 	printf("diff : %d\n", memcmp(ft, lib, count));
// 	free(ft);
// 	free(lib);

// 	// // < count = 0 size = (char) >
// 	// count = 1;
// 	// ft = ft_calloc(0, sizeof(char));
// 	// lib = calloc(0, sizeof(char));
// 	// printf("diff : %d\n", memcmp(ft, lib, count));
// 	// free(ft);
// 	// free(lib);
// }
