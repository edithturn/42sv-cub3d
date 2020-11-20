/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 20:14:25 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/28 11:51:58 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes and frees the given element and every successor of that element,
** using the function 'del' and free(3).
** Finally, the pointer to the list must be set to NULL.
** Parameters:
** #1. The adress of a pointer to an element.
** #2. The adress of the function used to delete the content of the element.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next;
	t_list *node;

	node = *lst;
	while (node)
	{
		next = node->next;
		del(node->content);
		free(node);
		node = next;
	}
	*lst = NULL;
}
