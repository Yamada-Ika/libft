/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:46:06 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/13 10:56:19 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_ptr;
	t_list	*lst_ptr;

	if (lst == NULL)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	if (new == NULL)
		return (NULL);
	lst_ptr = lst;
	while (lst != NULL)
	{
		lst->content = (*f)(lst->content);
		printf("lst->content : %s\n", (char *)lst->content);
		lst = lst->next;
	}
	new_ptr = new;
	ft_lstadd_back(&new, lst_ptr->next);
	new = new_ptr;
	while (new_ptr != NULL)
	{
		new_ptr->content = (*f)(new_ptr->content);
		printf("new_ptr->content : %s\n", (char *)new_ptr->content);
		new_ptr = new_ptr->next;
	}
	while (lst_ptr != NULL)
	{
		// new->content = (*f)(lst_ptr->content);
		if ((*del) != NULL)
			(*del)(lst_ptr->content);
		// new->next = lst_ptr->next;
		lst_ptr = lst_ptr->next;
		// new = new->next;
	}
	return (new);
}
