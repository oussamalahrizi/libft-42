/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 17:33:12 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/14 21:40:01 by Exiled           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

const char	*skip_spaces(const char *nptr, int *sign)
{
	size_t	i;

	i = 0;
	while (nptr[i] && (nptr[i] == 32 || nptr[i] == '\n' || nptr[i] == '\t'
			|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r'))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			*sign = -1;
		i++;
	}
	return (nptr + i);
}

int	ft_atoi(const char *nptr)
{
	int					sign;
	size_t				i;
	unsigned long long	result;

	result = 0;
	i = 0;
	sign = 1;
	nptr = skip_spaces(nptr, &sign);
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
		if (result > LLONG_MAX && sign == 1)
			return (-1);
		if (result > LLONG_MAX && sign == -1)
			return (0);
	}
	return (result * sign);
}
