/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_validate_resolution.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 12:55:03 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/14 11:39:59 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int		cub3d_validate_resolution(char *line)
{
	if (*line == 'R' && *(line + 1) == ' ')
		return (1);

	return (0);
}