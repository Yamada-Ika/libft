/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:46:06 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/15 12:50:00 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	// t_list	*new;
	// t_list	*next_new;
	// t_list	*new_ptr;
	// t_list	*lst_ptr;

	// if (lst == NULL)
	// 	return (NULL);
	// new = ft_lstnew((*f)(lst->content));
	// if (new == NULL)
	// 	return (NULL);
	// new_ptr = new;
	// lst_ptr = lst;
	// while (lst_ptr != NULL)
	// {
	// 	lst_ptr = lst_ptr->next;
	// 	if (lst_ptr == NULL)
	// 		break ;
	// 	next_new = ft_lstnew((*f)(lst_ptr->content));
	// 	if (next_new == NULL)
	// 		return (NULL);
	// 	ft_lstadd_back(&new, next_new);
	// }
	// lst_ptr = lst;
	// while (lst_ptr != NULL && (*del) != NULL)
	// {
	// 	// printf("(*del) : %p\n", (*del));
	// 	(*del)(lst_ptr->content);
	// 	lst_ptr = lst_ptr->next;
	// }
	// return (new_ptr);

	t_list	*new;
	t_list	*next_new;
	t_list	*new_ptr;

	if (lst == NULL)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	if (new == NULL)
		return (NULL);
	new_ptr = new;
	while (lst != NULL)
	{
		lst = lst->next;
		if (lst == NULL)
			break ;
		next_new = ft_lstnew((*f)(lst->content));
		if (next_new == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, next_new);
	}
	return (new_ptr);
}
