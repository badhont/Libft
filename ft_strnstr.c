/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badhont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 19:15:02 by badhont           #+#    #+#             */
/*   Updated: 2018/04/14 16:15:22 by badhont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	loo;
	char	*ptr;

	i = 0;
	loo = ft_strlen(to_find);
	ptr = (char *)str;
	if (loo == 0)
		return (ptr);
	while (ptr[i] && i < len)
	{
		j = 0;
		while (ptr[i + j] == to_find[j] && (i + j) < len)
		{
			j++;
			if (j == loo)
				return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
