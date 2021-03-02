/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 21:32:12 by julmarti          #+#    #+#             */
/*   Updated: 2021/02/28 21:32:21 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

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
