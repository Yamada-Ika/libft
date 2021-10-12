/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:46:06 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/12 21:42:02 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	// ft_lstiter(lst, (void)f);
	if (lst == NULL)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	while (lst->next != NULL)
	{
		(*f)(lst->content);
		ft_lstadd_front(&new, lst);
		(*del)(lst->content);
		lst = lst->next;
		new = new->next;
	}
	return (new);
}
