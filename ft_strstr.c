/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badhont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:23:32 by badhont           #+#    #+#             */
/*   Updated: 2018/04/14 16:16:24 by badhont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	size_t	j;
	size_t	len;
	char	*ptr;

	i = 0;
	len = ft_strlen(to_find);
	ptr = (char *)str;
	if (len == 0)
		return (ptr);
	while (ptr[i])
	{
		j = 0;
		while (ptr[i + j] == to_find[j])
		{
			j++;
			if (j == len)
				return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
