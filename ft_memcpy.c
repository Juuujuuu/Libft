/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:28:22 by julmarti          #+#    #+#             */
/*   Updated: 2021/02/25 12:27:45 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sour;
	size_t			i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	sour = (unsigned char *)src;
	while (n > 0)
	{
		dest[i] = sour[i];
		i++;
		n--;
	}
	return (dest);
}
