/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 23:51:58 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/16 05:47:25 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		needle_len;

	needle_len = ft_strlen(needle);
	if (*needle && len == 0)
		return (0);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len >= needle_len)
	{
		if (*haystack == *needle && !ft_memcmp(haystack, needle, needle_len))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	// char haystack[30] = "aaabcabcd";
// 	// char needle[10] = "aabc";
// 	//char * empty = (void*)0;
// 	//check(ft_strnstr(empty, "coucou", -1) == 0);
// 	//printf("original :%s\n", strnstr(NULL, "test", 10));
// 	//printf("mine :%s\n", ft_strnstr(NULL, "test", 10));
// 	write(1, "\n", 1);
// 	return (0);
// }
// // decrement len and compare it to needle length