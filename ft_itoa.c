/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badhont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 11:37:34 by badhont           #+#    #+#             */
/*   Updated: 2018/04/27 19:52:12 by badhont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	cpy;
	char			*str;

	i = (n >= 0) ? 1 : 2;
	cpy = (n >= 0) ? n : -n;
	while ((cpy = cpy / 10))
		i++;
	cpy = (n > 0) ? n : -n;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	str[0] = (n >= 0) ? '0' : '-';
	while (cpy && i--)
	{
		str[i] = cpy % 10 + '0';
		cpy = cpy / 10;
	}
	return (str);
}
