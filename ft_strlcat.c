/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 00:13:57 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/20 03:19:11 by Exiled           ###   ########.fr       */
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
// 	char *s = "world";
// 	// char *dest =  malloc(7);
// 	// char *dest1 =  malloc(7);
// 	char *dest = calloc(5 , 1);
// 	char *dest1 = calloc(5 , 1);
// 	ft_memset(dest, 'A', 5);
// 	ft_memset(dest1, 'A', 5);
// 	printf("mine : \n");
// 	printf("%zu\n", ft_strlcat(dest, s, 7));
// 	printf("%s\n", dest);
// 	//printf("their : \n");
// 	// printf("%zu\n", strlcat(dest1, s, 7)); 
// 	// printf("%s\n", dest1);
// 	return (0);
// }