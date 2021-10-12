/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:31:44 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/12 21:04:36 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_element;

	next_element = *lst;
	while ((*del) != NULL && next_element != NULL)
	{
		(*del)(next_element->content);
		next_element = (*lst)->next;
		(*lst)->next = NULL;
		free(*lst);
	}
}
