/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:49:55 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/14 10:53:20 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp_lst_next;

	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp_lst_next = *lst;
		*lst = new;
		ft_lstadd_back(&new, tmp_lst_next);
	}
}

// < test code >
// #include <stdio.h>

// int main(void) {
// 	t_list *old;
// 	t_list *new;

// 	old = ft_lstnew("hello");
// 	new = ft_lstnew("good evening");
// 	// ft_lstadd_front(&old, new);
// 	// printf("%s %p\n", (char *)old->content, old->next); // hello 0x...
// 	old = NULL;
// 	ft_lstadd_front(&old, new);
// 	// printf("%s %p\n", (char *)old->content, old->next); // hello 0x...
// 	free(old);
// 	free(new);
// }
