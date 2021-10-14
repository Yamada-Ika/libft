/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:46:06 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/14 21:17:59 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*next_new;
	t_list	*new_ptr;
	t_list	*lst_ptr;

	if (lst == NULL)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	if (new == NULL)
		return (NULL);
	lst_ptr = lst;
	while (lst_ptr != NULL)
	{
		lst_ptr = lst_ptr->next;
		if (lst_ptr == NULL)
			break ;
		next_new = ft_lstnew((*f)(lst_ptr->content));
		if (next_new == NULL)
			return (NULL);
		ft_lstadd_back(&new, next_new);
	}
	lst_ptr = lst;
	while (lst_ptr != NULL && (*del) != NULL)
	{
		(*del)(lst_ptr->content);
		lst_ptr = lst_ptr->next;
	}
	return (new_ptr);
}
