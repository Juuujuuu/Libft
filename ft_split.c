/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:22:28 by julmarti          #+#    #+#             */
/*   Updated: 2021/02/28 22:04:58 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		nb_line(char const *s, char c)
{
	int i;
	int nb_line;

	i = 0;
	nb_line = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			return (nb_line);
		while (s[i] != c && s[i])
			i++;
		nb_line++;
	}
	return (nb_line);
}

static	char	**assign_tab(char **tab, char const *str, char del)
{
	int	y;
	int	x;
	int	i;

	y = 0;
	x = 0;
	i = 0;
	while (y < nb_line(str, del))
	{
		while (str[i] == del && str[i])
			i++;
		if (!str[i])
			break ;
		while (str[i] != del && str[i])
		{
			tab[y][x] = str[i];
			i++;
			x++;
		}
		tab[y][x] = 0;
		y++;
		x = 0;
	}
	return (tab);
}

static	void	*freetab(char ***tab, int i)
{
	while (i >= 0)
	{
		free(*tab[i]);
		i--;
	}
	free(*tab);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		y;

	if (s == NULL)
		return (NULL);
	i = 0;
	y = nb_line(s, c);
	tab = (char **)malloc(sizeof(char *) * (y + 1));
	if (tab == NULL)
		return (NULL);
	while (i < y)
	{
		if (!(tab[i] = malloc(sizeof(char *) * ((ft_strlen(s) + 1)))))
			return (freetab(&tab, i));
		i++;
	}
	tab[i] = NULL;
	return (assign_tab(tab, s, c));
}
