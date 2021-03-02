/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:54:42 by julmarti          #+#    #+#             */
/*   Updated: 2021/02/26 18:05:23 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		curseur;

	str = (char *)s;
	curseur = ft_strlen(str);
	if (str == NULL)
		return (NULL);
	if (c == 0)
		return (&str[curseur]);
	while (curseur > 0)
	{
		curseur--;
		if (str[curseur] == c)
			return (&str[curseur]);
	}
	return (0);
}
