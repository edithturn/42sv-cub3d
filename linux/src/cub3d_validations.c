/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_validations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 01:07:38 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/11 02:16:57 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int cub3d_validations(t_map *map)
{
	char	*cub;
	//getting the format of a map [.cub]
	while (!ft_strchar(map->file, '.'))
	{
		// find a point and compare if from point until finish the format is .cub, is  a valid format
		map->file -=1;
		if(!ft_strchar(map->file, '\n'))
			cub = map->file;
	}
	if (!strcmp(cub, ".cub"))
		printf("%s", "Invalid format map");
}