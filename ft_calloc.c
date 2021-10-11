/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:46:04 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 15:13:20 by iyamada          ###   ########.fr       */
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

	// // < empty string >
	// count = 0;
	// ft = ft_calloc(count, sizeof(char));
	// lib = calloc(count, sizeof(char));
	// printf("diff : %d\n", memcmp(ft, lib, 1));
	// free(ft);
	// free(lib);

	// // < size = 0 >
	// count = 10;
	// ft = ft_calloc(count, 0);
	// lib = calloc(count, 0);
	// printf("diff : %d\n", memcmp(ft, lib, 1));
	// free(ft);
	// free(lib);

	// // < count = 0 >
	// count = 1;
	// ft = ft_calloc(0, sizeof(int));
	// lib = calloc(0, sizeof(int));
	// printf("diff : %d\n", memcmp(ft, lib, count));
	// free(ft);
	// free(lib);

	// // // < count = 0 size = (char) >
	// // count = 1;
	// // ft = ft_calloc(0, sizeof(char));
	// // lib = calloc(0, sizeof(char));
	// // printf("diff : %d\n", memcmp(ft, lib, count));
	// // free(ft);
	// // free(lib);

	// // < count = 1 >
	// count = 1;
	// ft = ft_calloc(count, sizeof(int));
	// lib = calloc(count, sizeof(int));
	// printf("diff : %d\n", memcmp(ft, lib, count));
	// free(ft);
	// free(lib);
// }
