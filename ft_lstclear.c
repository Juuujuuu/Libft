/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:00:59 by julmarti          #+#    #+#             */
/*   Updated: 2021/03/02 12:32:25 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list *tmp;
	t_list *suiv;

	tmp = *lst;
	suiv = (*lst)->next;
	if (!del || !lst || !tmp || !suiv)
		return ;
	if ((*lst) != NULL)
	{
		while (tmp)
		{
			suiv = tmp->next;
			del(tmp->content);
			free(tmp);
			tmp = suiv;
		}
		tmp = NULL;
	}
	*lst = NULL;
}
