/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:29:52 by julmarti          #+#    #+#             */
/*   Updated: 2021/02/25 17:15:05 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*newstr;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	newstr = ft_calloc((len + 1), sizeof(char));
	if (!newstr)
		return (NULL);
	if (start >= len)
		return (newstr);
	while (s[start] && len != 0)
	{
		newstr[j] = s[i];
		i++;
		j++;
		len--;
	}
	newstr[j] = '\0';
	return (newstr);
}
