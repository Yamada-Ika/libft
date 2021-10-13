/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:46:06 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/14 00:58:51 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*prev_new;
	t_list	*new_ptr;
	t_list	*lst_ptr;

	if (lst == NULL)
		return (NULL);
	prev_new = ft_lstnew((*f)(lst->content));
		if (prev_new == NULL)
			return (NULL);
	new_ptr = prev_new;
	lst_ptr = lst;
	while (lst_ptr != NULL)
	{
		lst_ptr = lst_ptr->next;
		if (lst_ptr == NULL)
			break ;
		new = ft_lstnew((*f)(lst_ptr->content));
		if (new == NULL)
			return (NULL);
		prev_new->next = new;
		prev_new = new;
	}
	lst_ptr = lst;
	while (lst_ptr != NULL && (*del) != NULL)
	{
		(*del)(lst_ptr->content);
		lst_ptr = lst_ptr->next;
	}
	return (new_ptr);
}
