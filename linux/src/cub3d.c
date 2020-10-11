/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:45:30 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/11 01:16:22 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../minilibx/mlx.h"
#include	"../cub3d.h"
#include <fcntl.h>

int main(int ac, char **av)
{
	t_map *map;

	map = (t_map *)ft_memalloc(sizeof(t_map));
	if (ac == 2)
	{
		//vaidating map
		map->file = av[1];
		if(!(cub3d_validations(map->file)))
			printf("%s", "No map valid format");
		if(!(cub3d_read(map->file)))
			printf("%s", "No resolution found");
		if (!(cub3d_parse(map->file)))
			printf("%s", "No valid format, no digits");
		else
			cub3d_initialize();
	}
	if (ac == 1)
		printf("%s", "No map");

}