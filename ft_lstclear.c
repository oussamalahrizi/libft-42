/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:32:41 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/19 05:32:37 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del)
	{
		while (*lst)
		{
			temp = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(temp, del);
		}
	}
}

// void del(void *content)
// {
// 	(void) content;
// }

// #include <stdio.h>
// int main (void)
// {
// 	t_list *head;
// 	t_list *middle;
// 	t_list *end;

// 	head = ft_lstnew((void *)"a");
// 	middle = ft_lstnew((void *)"b");
// 	end = ft_lstnew((void *)"c");
// 	ft_lstadd_back(&head, middle);
// 	ft_lstadd_back(&head, end);

// 	//t_list *temp = a;
// 	// while (temp)
// 	// {
// 	// 	printf("%s\n", temp->content);
// 	// 	temp = temp->next;
// 	// }
// 	// while (head)
// 	// {
// 	// 	printf("%s\n", head->content);
// 	// 	head = head->next;
// 	// }
// 	ft_lstclear(&head, del);
// 	printf("after clear \n");
// 	while (head)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}
// }