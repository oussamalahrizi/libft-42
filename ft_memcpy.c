/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:08:34 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/18 03:17:01 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;

	if (!src && !dest)
		return (dest);
	i = 0;
	while (i < n)
	{
		*((char *)(dest + i)) = *((char *)(src + i));
		i++;
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	const char s[10] = "1337";
// 	printf("%s", (char *)ft_memcpy((void *)s, "1234", 8));
// 	//char *dest = (char *) calloc(0, 1);
// 	return (0);
// }
// once src NULL or dest NULL == seg fault
// dest has not enough space or size > src length = bus error