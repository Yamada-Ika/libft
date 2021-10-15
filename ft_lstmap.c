/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:46:06 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/15 12:55:25 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
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
