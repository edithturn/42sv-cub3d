/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 20:15:03 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/29 19:51:46 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates the list 'lst' and applies the function 'f'
** to the content of  each element.
** Parameters:
** #1. The adress of a pointer to an element.
** #2. The adress of the function used to iterate on the list.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *next;

	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		next = lst->next;
		lst = next;
	}
}
