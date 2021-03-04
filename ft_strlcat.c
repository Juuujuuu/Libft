/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 12:35:00 by julmarti          #+#    #+#             */
/*   Updated: 2021/03/04 21:08:57 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(dst);
	if (size <= j)
		return (size + ft_strlen(src));
	while (src[i] && i + j < (size - 1))
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(src) + j);
}
