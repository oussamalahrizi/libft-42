/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:24:27 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/17 04:53:26 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_total_words(const char *str, char c)
{
	size_t	_string_count;

	_string_count = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			_string_count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (_string_count);
}

char	**free_stuff(char **strings)
{
	size_t	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		strings[i] = NULL;
		i++;
	}
	free(strings);
	strings = NULL;
	return (strings);
}

size_t	get_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	index;

	if (!s)
		return (NULL);
	strings = (char **) malloc(sizeof(char *) * (get_total_words(s, c) + 1));
	if (!strings)
		return (NULL);
	index = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			strings[index++] = ft_substr(s, 0, get_len(s, c));
			if (!strings[index - 1])
				return (free_stuff(strings));
			s += get_len(s, c);
		}
	}
	strings[index] = 0;
	return (strings);
}

// #include <stdio.h>
// int main ()
// {
//     char a[] = "hello!zzzzzzzztestz";
//     char **s = ft_split(a, 'z');
//     while (*s != 0)
//     {
//         printf("%s\n",*s);
//         s++;
//     }
// }