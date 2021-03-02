/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 21:32:12 by julmarti          #+#    #+#             */
/*   Updated: 2021/03/02 12:33:11 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	if (element)
	{
		element->content = content;
		element->next = NULL;
	}
	return (element);
}
