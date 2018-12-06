/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badhont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 13:20:29 by badhont           #+#    #+#             */
/*   Updated: 2018/04/30 17:00:27 by badhont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len1;
	int		len2;
	char	*str;

	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(str = malloc(len1 + len2)))
		return (NULL);
	i = 0;
	while (len1--)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (len2--)
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
