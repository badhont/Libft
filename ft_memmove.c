/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badhont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 16:36:35 by badhont           #+#    #+#             */
/*   Updated: 2018/04/28 18:35:51 by badhont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *)src;
	b = (char *)dest;
	if (src > dest)
	{
		while (i < n)
		{
			b[i] = a[i];
			i++;
		}
	}
	else
		while (n--)
			b[n] = a[n];
	return (dest);
}
