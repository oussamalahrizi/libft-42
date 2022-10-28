/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 00:13:57 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/16 05:34:00 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < dsize && dst[i] != '\0')
		i++;
	if (i == dsize)
		return (i + ft_strlen(src));
	while (src[j] != '\0' && (i + j + 1) < dsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// #include <string.h>

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
// 	char s[5] = "world";
// 	char *dest =  (void *)0;
// 	printf("%zu\n", ft_strlcat(dest, s, 0));
// 	//printf("%zu\n", strlcat(dest, s, 20));
// 	printf("%s\n", dest);
// 	return (0);
// }
