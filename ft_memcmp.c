/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:51:17 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/14 02:38:31 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s1)[i] == ((unsigned char *) s2)[i])
			i++;
		else
			return (((unsigned char *)s1)[i] - ((unsigned char *) s2)[i]);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	// char s2[] = {0, 0, 127, 0};
// 	// char s3[] = {0, 0, 42, 0};
// 	// check(ft_memcmp(s2, s3, 4) != 0);
// 	printf("%d\n", ft_memcmp("wdq", "qwd", 0));
// 	// printf("%d", memcmp(s2, s3, 4));
// 	write(1, "\n", 1);
// 	return (0);
// }