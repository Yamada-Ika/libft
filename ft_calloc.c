/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:46:04 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/11 00:12:54 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*allocatedMemory;
	void	*allocatedMemoryPointTo;

	allocatedMemory = (int *)malloc(size * count);
	if (allocatedMemory == NULL)
		return (NULL);
	allocatedMemoryPointTo = (void *)allocatedMemory;
	while (count-- > 0)
		*(allocatedMemory++) = 0;
	return (allocatedMemoryPointTo);
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
