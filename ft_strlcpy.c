/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 20:34:20 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/07 22:23:12 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && *(src + i) != '\0')
		{
			*(dst + i) = *(src + i);
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include <string.h>
// #include <stdio.h>

// void	ft_putstr(char *str)
// {
// 	while(*str)
// 	{
// 		write(1, str, 1);
// 		str++;
// 	}
// 	write(1, "\n", 1);
// }

// int main(void)
// {
// 	const char s[10] = "hello";
// 	char dest[10] =  "hahahah";
// 	ft_putstr(dest);
// 	printf("%zu\n", ft_strlcpy(dest, s, 3));
// 	ft_putstr(dest);
// 	return (0);
// }
