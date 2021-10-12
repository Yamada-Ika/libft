/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:49:55 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/12 21:36:45 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL)
		(*lst)->next = new;
}

// < test code >
// #include <stdio.h>

// int main(void) {
// 	t_list *old;
// 	t_list *new;

// 	old = ft_lstnew("hello");
// 	printf("%s %p\n", (char *)old->content, old->next); // hello 0x0
// 	new = ft_lstnew("good evening");
// 	printf("%s %p\n", (char *)new->content, new->next); // good evening 0x0
// 	ft_lstadd_front(&old->next, new);
// 	printf("%s %p\n", (char *)old->content, old->next); // hello 0x...
// 	ft_lstadd_front(NULL, new);
// 	printf("%s %p\n", (char *)old->content, old->next); // hello 0x...
// 	free(old);
// 	free(new);
// }
