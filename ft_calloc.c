/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:20:16 by julmarti          #+#    #+#             */
/*   Updated: 2021/02/26 17:44:37 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*emptystr(void)
{
	char	*c;

	c = (char *)malloc(1);
	if (!c)
		return (NULL);
	c[0] = 0;
	return ((void *)c);
}

void			*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	len;

	if (size == 0 || count == 0)
		return (emptystr());
	len = size * count;
	if (!(str = (char *)malloc(len)))
		return (emptystr());
	ft_bzero(str, len);
	return (str);
}
