/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:34:05 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/17 23:54:46 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	char *s = "";
// 	// char str[5] = "salah";
// 	printf("mine : %s\n", (char *)ft_memset(s, 'g', 5));
// 	printf("mine : %s\n", (char *)memset(s, 'g', 5));
// 	return (0);
// }