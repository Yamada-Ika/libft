/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:57:27 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/12 17:05:38 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	return (ft_lstlast(lst->next));
}

// test code
// #include <stdio.h>

// int main(void) {
// 	t_list *lst0 = ft_lstnew("0");
// 	t_list *lst1 = ft_lstnew("1");
// 	t_list *lst2 = ft_lstnew("2");
// 	t_list *lst3 = ft_lstnew("3");
// 	t_list *ret;

// 	lst0->next = lst1;
// 	lst1->next = lst2;
// 	lst2->next = lst3;
// 	ret = ft_lstlast(lst0);
// 	printf("ret->content : %s, ret->next : %p\n", (char *)ret->content, ret->next);
// 	free(lst0);
// 	free(lst1);
// 	free(lst2);
// 	free(lst3);
// }
