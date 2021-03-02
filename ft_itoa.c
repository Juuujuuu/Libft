/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:21:56 by julmarti          #+#    #+#             */
/*   Updated: 2021/02/28 22:02:19 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count(int l)
{
	int count;

	count = 0;
	if (l < 0)
	{
		l = -l;
		count++;
	}
	while (l >= 10)
	{
		l = l / 10;
		count++;
	}
	return (count);
}

static	char	*ft_freedup(const char *str, char *tofree)
{
	free(tofree);
	return (ft_strdup(str));
}

static	void	ft_sign(int n, unsigned int *unbr, int *neg)
{
	if (n >= 0)
		*unbr = n;
	else
	{
		*neg = 1;
		*unbr = -n;
	}
}

char			*ft_itoa(int n)
{
	char			*str;
	int				i;
	int				neg;
	unsigned int	unbr;

	i = ft_count(n);
	neg = 0;
	str = ft_calloc(i + 2, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		return (ft_freedup("0", str));
	if (n == -2147483648)
		return (ft_freedup("-2147483648", str));
	ft_sign(n, &unbr, &neg);
	while (i >= 0)
	{
		str[i] = unbr % 10 + '0';
		unbr = unbr / 10;
		i--;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
