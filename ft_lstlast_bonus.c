/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:02:11 by julmarti          #+#    #+#             */
/*   Updated: 2021/02/10 19:22:00 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list		*ft_lstlast(t_list *lst)
{
	t_list *tmp;

	tmp = lst;
	if (lst == NULL)
		return (NULL);
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		return (tmp);
	}
}
