/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_validations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 01:07:38 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/11 17:06:22 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int cub3d_validations(char *file, t_map *map)
{
	char	*cub;

	cub = ft_strchr(file, '.');
	if (cub != NULL)
	{
		if (strcmp(cub, ".cub") != 0)
			printf("%s", "Invalid map format\n");
		else
			cub3d_read(map);
	}
	else
			printf("%s", "Invalid Map Fromat");
	return (0);
}