/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:19:47 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/10 16:21:42 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int ft_is_file_correct_format(char *file_name)
{
	char	*format;

	format = ft_strchr(file_name, '.');
	if (format != NULL)
		if (ft_strcmp(format, ".cub") != 0)
			return (FAILED);
	return (1);
}