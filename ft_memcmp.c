/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badhont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 17:29:33 by badhont           #+#    #+#             */
/*   Updated: 2018/05/02 14:54:07 by badhont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*a;
	unsigned const char	*b;

	i = 0;
	a = (unsigned const char *)s1;
	b = (unsigned const char *)s2;
	while (i < n && a[i] == b[i])
		i++;
	return (i == n) ? (0) : (a[i] - b[i]);
}
