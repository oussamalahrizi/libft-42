/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:27:32 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/19 00:17:21 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

// void del(void *content)
// {
// 	free(content);
// }

// int main(void)
// {
// 	char *str = malloc(2);
// 	char *str2 = malloc(2);
// 	*str = 'h';
// 	*str2 = 'P';
// 	t_list *a = ft_lstnew(str);
// 	t_list *b = ft_lstnew(str2);

// 	ft_lstadd_back(&a, b);
// 	printf("%s\n", a->content);
// 	ft_lstdelone(a, &del);
// 	printf("%s\n", a->content);
// 	printf("%p\n", a->next);
// }