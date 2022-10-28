/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 03:00:27 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/19 05:39:59 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// #include <stdio.h>
// int main (void)
// {
// 	t_list	*node;
//	char str[] = "123"
// 	node = ft_lstnew(str);
// 	printf("%s\n", node->content);
// 	printf("%s", (char *)node->next);
// }