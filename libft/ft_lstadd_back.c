/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 20:14:01 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/28 11:51:12 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Adds the element 'new' at the end of the list.
** Parameters:
** #1. The address of a pointer to the first link of a list.
** #2. The address of a pointer to the element to be added to the list.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}
