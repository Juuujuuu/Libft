/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 14:57:45 by julmarti          #+#    #+#             */
/*   Updated: 2021/02/25 09:30:39 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sour;
	size_t			i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	sour = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = sour[i];
		if (sour[i] == (unsigned char)c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
