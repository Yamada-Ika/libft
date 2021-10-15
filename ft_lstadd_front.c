/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:49:55 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/15 21:55:58 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*new_ptr;

	if (lst == NULL || new == NULL)
		return ;
	else
	{
		new_ptr = new;
		ft_lstadd_back(&new, *lst);
		*lst = new_ptr;
	}
}

// < test code >
// #include <stdio.h>

// int main(void) {
// 	t_list * l =  NULL;
// 	ft_lstadd_front(&l, ft_lstnew((void*)1));
// 	// /* 1 */ check(l->content == (void*)1);
// 	// /* 2 */ check(l->next == 0);
// 	printf("l->content : %p\n", l->content);
// 	printf("l->next    : %p\n", l->next);

// 	ft_lstadd_front(&l, ft_lstnew((void*)2));
// 	// /* 3 */ check(l->content == (void*)2);
// 	// /* 4 */ check(l->next->content == (void*)1);
// 	// /* 5 */ check(l->next->next == 0); 
// 	printf("l->content       : %p\n", l->content);
// 	printf("l->next->content : %p\n", l->next->content);
// 	printf("l->next->next    : %p\n", l->next->next);
// }
