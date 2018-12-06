/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badhont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 22:01:04 by badhont           #+#    #+#             */
/*   Updated: 2018/05/01 20:53:23 by badhont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	res = f(lst);
	tmp = res;
	lst = lst->next;
	while (lst)
	{
		res->next = f(lst);
		res = res->next;
		lst = lst->next;
	}
	return (tmp);
}
