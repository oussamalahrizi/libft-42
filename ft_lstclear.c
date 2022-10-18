/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:32:41 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/18 05:10:31 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (lst && del)
	{
		while (*lst)
		{
			node = *lst;
			*lst = node->next;
			ft_lstdelone(node, del);
		}
		lst = NULL;
	}
}

// void del(void *content)
// {
// 	content = NULL;
// }

// #include <stdio.h>
// int main (void)
// {
// 	t_list *a;
// 	t_list *b;
// 	t_list *c;

// 	a = ft_lstnew("a");
// 	b = ft_lstnew("b");
// 	c = ft_lstnew("c");
// 	ft_lstadd_back(&a, b);
// 	ft_lstadd_back(&b, c);
// 	printf("%s\n", a->content);
// 	printf("%s\n", (a->next)->content);
// 	printf("%s\n", (b->next)->content);
// 	ft_lstclear(&a, del);
// 	printf("%s\n", (char *)a);
// }