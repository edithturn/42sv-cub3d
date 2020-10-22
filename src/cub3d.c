/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:45:30 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/19 10:18:55 by epuclla          ###   ########.fr       */
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
		cub3d_validations(map);
		cub3d_initialize(map);
	}
	if (ac == 1)
		printf("%s", "No map");

	return (0);
}