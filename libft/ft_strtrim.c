/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 23:58:39 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/16 00:06:34 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of
** 's1' with the characters specified in 'set' removed
** from the beginning and the end of the string.
** Parameters:
** #1. The string to be trimmed.
** #2. The reference set of characters to trim.
*/

static		int	ft_space_character(char s, char const *set)
{
	char const	*ptr;

	ptr = set;
	while (*ptr)
	{
		if (*ptr == s)
			return (1);
		ptr++;
	}
	ptr = set;
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	char		*ptr;
	const char	*final;

	if (s1 == NULL)
		return (NULL);
	while (*s1 && ft_space_character(*s1, set))
		s1++;
	if (!*s1)
		return (ft_strnew(0));
	final = (ft_strlen(s1) + s1 - 1);
	while (ft_space_character(*final, set))
		final--;
	str = ft_strnew((final - s1) + 1);
	if (str == NULL)
		return (NULL);
	ptr = str;
	while (s1 <= final)
	{
		*str = (char)*s1;
		str++;
		s1++;
	}
	return (ptr);
}