/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:38:44 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/18 03:39:51 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!src && !dest)
		return (dest);
	if (s < d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
		return (dest);
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// #include <string.h>

// void	ft_putstr(char *str);

// int main(void)
// {
// 	char s[7] = "abcd";
// 	//char dest[10] =  "wqd";
// 	ft_putstr((char *) ft_memmove(s + 3, s, 20));
// 	return (0);
// }