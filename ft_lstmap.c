/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:46:06 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/18 17:03:40 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	**new_adr;
	t_list	*next_new;

	if (lst == NULL)
		return (NULL);
	new = NULL;
	new_adr = &new;
	while (lst != NULL)
	{
		next_new = ft_lstnew((*f)(lst->content));
		if (next_new == NULL)
		{
			ft_lstclear(&new, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, next_new);
		new = new->next;
		lst = lst->next;
	}
	return (*new_adr);
}
