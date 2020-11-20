/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:23:43 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/23 00:12:05 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Counts the number of elements in a list.
** Parameters: #1. The beginning of the list.
** Return value: Length of the list.
*/

int	ft_lstsize(t_list *lst)
{
	t_list	*next;
	int		count;

	count = 0;
	while (lst)
	{
		next = lst->next;
		lst = next;
		count = count + 1;
	}
	return (count);
}
