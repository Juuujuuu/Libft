/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:00:59 by julmarti          #+#    #+#             */
/*   Updated: 2021/02/24 14:16:44 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

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
