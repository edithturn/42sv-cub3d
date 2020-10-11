/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:45:30 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/11 04:07:47 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int main(int ac, char **av)
{
	t_map *map;

	map = (t_map *)ft_memalloc(sizeof(t_map));
	if (ac == 2)
	{
		map->file = av[1];
		cub3d_validations(map->file);
		/*if(!(cub3d_read(map->file)))
			printf("%s", "No resolution found");
		if (!(cub3d_parse(map->file)))
			printf("%s", "No valid format, no digits");
		else
			cub3d_initialize();*/
	}
	if (ac == 1)
		printf("%s", "No map");

}