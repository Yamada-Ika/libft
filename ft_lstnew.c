/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:33:49 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/14 15:57:32 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

// < test code >
// #include <stdio.h>

// int main(void) {
// 	char *str1 = "hello, world!";
// 	t_list	*greeting;

// 	greeting = ft_lstnew(str1);
// 	printf("%s %p\n", (char *)greeting->content, greeting->next);
// 	free(greeting);
// }