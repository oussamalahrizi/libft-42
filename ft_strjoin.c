/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:05:34 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/13 22:12:58 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	char	*start;
	size_t	total_len;

	if (!s1 || !s2)
		return (0);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	join = (char *) malloc(sizeof(char) * (total_len + 1));
	if (!join)
		return (NULL);
	start = join;
	ft_memcpy(join, s1, ft_strlen(s1));
	join += ft_strlen(s1);
	ft_memcpy(join, s2, ft_strlen(s2));
	join += ft_strlen(s2);
	*join = 0;
	return (start);
}
