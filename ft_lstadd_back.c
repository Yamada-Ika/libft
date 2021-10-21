/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:14:48 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/21 11:10:42 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	lst_last = ft_lstlast(*lst);
	lst_last->next = new;
}

// test code
// #include <stdio.h>

// int main(void) {
// 	t_list *lst0 = ft_lstnew("0");
// 	t_list *lst1 = ft_lstnew("1");
// 	t_list *lst2 = ft_lstnew("2");
// 	t_list *new = ft_lstnew("new");
// 	t_list	*lst_last;
// 	t_list *l = NULL;

// 	// // normal
// 	// ft_lstadd_back(&lst0, new);
// 	// lst_last = ft_lstlast(lst0);
// 	// free(lst0);
// 	// free(lst1);
// 	// free(lst2);
// 	// free(new);

// 	// l = NULL
// 	ft_lstadd_back(&l, new);
// 	lst_last = ft_lstlast(lst0);
// 	free(lst0);
// 	free(lst1);
// 	free(lst2);
// 	free(new);
// }
