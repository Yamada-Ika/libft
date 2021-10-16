/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:31:44 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/16 18:37:15 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev_lst;
	t_list	*next_lst;

	if (lst == NULL || *lst == NULL || (*del) == NULL)
		return ;
	next_lst = *lst;
	while (next_lst != NULL)
	{
		prev_lst = next_lst;
		next_lst = next_lst->next;
		ft_lstdelone(prev_lst, (*del));
	}
	*lst = NULL;
}

// test code
// #include <stdio.h>

// int main(void) {
// 	t_list *l = ft_lstnew(strdup("hello"));
// 	l->next = ft_lstnew(strdup("world"));
// 	ft_lstclear(&l, free);
// }
