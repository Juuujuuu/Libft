/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:18:54 by julmarti          #+#    #+#             */
/*   Updated: 2021/02/25 09:21:54 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sour;

	i = 0;
	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	sour = (unsigned char *)src;
	if (dest < sour)
	{
		while (i < len)
		{
			dest[i] = sour[i];
			i++;
		}
	}
	else
		while (i < len)
		{
			dest[len - 1] = sour[len - 1];
			len--;
		}
	return (dest);
}
