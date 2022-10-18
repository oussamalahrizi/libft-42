/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:25:01 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/13 22:21:24 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len)
	{
		if (s[len -1] == (char)c)
			return ((char *)(s + len - 1));
		len--;
	}
	len = ft_strlen(s);
	if ((char)c == 0)
		return ((char *)(s + len));
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	char *src = "";
// 	printf("%s", ft_strrchr((const char *)src, 't'));
// 	return (0);
// }