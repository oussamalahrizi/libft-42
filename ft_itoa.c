/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Exiled <exiled@owly.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:23:17 by olahrizi          #+#    #+#             */
/*   Updated: 2022/10/13 23:13:09 by olahrizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	nbr;

	nbr = n;
	len = num_len(nbr);
	s = (char *) malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = 0;
	if (nbr == 0)
		s[0] = '0';
	if (nbr < 0)
	{
		nbr = -nbr;
		s[0] = '-';
	}
	while (nbr > 0)
	{
		s[len--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (s);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%s", ft_itoa(0));
// 	return (0);
// }
