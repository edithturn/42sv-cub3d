/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_map_content.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:36:59 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/15 11:39:21 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int ft_initialize_map_content(t_cub3d *cub3d)
{
	int					n;

	cub3d->map.window.height = 0;
	cub3d->map.window.width = 0;
	n = 0;
	while (n < 5)
		cub3d->map.texture.path[n++] = 0;
	n = 0;
	while (n < 4)
	{
		cub3d->map.color.ceiling_color[n++] = 0;
		cub3d->map.color.floor_color[n++] = 0;
	}
	cub3d->map.maze.rows = 0;
	cub3d->map.maze.cols = 0;


	cub3d->map.tile_size = 32;
	cub3d->map.maze.rows = cub3d->map.window.height / cub3d->map.tile_size;
	cub3d->map.maze.cols = cub3d->map.window.width / cub3d->map.tile_size;
	cub3d->map.wall_color = GREEN;
	cub3d->map.floor_color = WHITE;
	cub3d->player.color = RED;
	cub3d->player.pos_x = cub3d->map.window.width / 2;
	cub3d->player.pos_y = cub3d->map.window.height / 2;

	return 0;
}