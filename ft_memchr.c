/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:40:42 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/10 21:47:34 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char str[] = "oussama";
// 	printf("%s", (char *) ft_memchr((const void *) str, 0, 10));
// 	return (0);
// }