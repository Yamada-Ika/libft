/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyamada <iyamada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:19:09 by iyamada           #+#    #+#             */
/*   Updated: 2021/10/21 17:31:03 by iyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	if (lst == NULL)
		return (0);
	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// < test code >
// #include <stdio.h>

// int main(void) {
// 	t_list *lst = ft_lstnew("hi");
// 	t_list *lst2 = ft_lstnew("hello");
// 	t_list *lst3 = ft_lstnew("good evening");
// 	lst->next = lst2;
// 	lst2->next = lst3;
// 	printf("%d\n", ft_lstsize(lst));
// 	free(lst);
// 	free(lst2);
// 	free(lst3);
// }