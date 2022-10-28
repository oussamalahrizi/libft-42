/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:48:08 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/19 05:40:07 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	new_lst = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	(void) del;
	return (new_lst);
}

// void *f(void *content)
// {
// 	if (1)
// 		return (content);
// 	return (NULL);
// }

// void del(void *content)
// {
// 	(void) content;
// }

// int main ()
// {
// 	t_list *head = ft_lstnew((void *)"a");
// 	t_list *middle = ft_lstnew((void *)"a");
// 	t_list *end = ft_lstnew((void *)"a");

// 	ft_lstadd_back(&head, middle);
// 	ft_lstadd_back(&head, end);
// 	// while (head)
// 	// {
// 	// 	printf("%s\n", head->content);
// 	// 	head = head->next;
// 	// }
// 	//printf("after\n");
// 	t_list *tmp = ft_lstmap(head, f, del);
// 	while (tmp)
// 	{
// 		printf("%s\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// }