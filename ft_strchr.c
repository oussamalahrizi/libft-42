/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:14:46 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/13 22:21:02 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *) s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *) s);
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main (void)
// {
// 	char *s = "";
// 	// check(ft_strchr(s, 't' + 256) == s)
// 	printf("%s",ft_strchr("teste", 't' + 256));
// 	write(1, "\n", 1);
// 	return (0);
// }