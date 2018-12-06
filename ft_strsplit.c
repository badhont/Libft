/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badhont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 22:45:28 by badhont           #+#    #+#             */
/*   Updated: 2018/05/02 17:10:57 by badhont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		start;
	int		end;
	int		index;
	char	**tab;

	i = 0;
	index = 0;
	if (!s || !(tab = (char **)malloc(sizeof(char *) *
	(ft_countwords(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (end > start)
			if (!(tab[index++] = ft_strsub(s, start, end - start)))
				return (NULL);
	}
	tab[index] = 0;
	return (tab);
}
