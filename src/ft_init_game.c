/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:01:14 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/15 10:22:51 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void ft_init_game(t_cub3d *cub3d)
{
	cub3d->map.tile_size = 32;
	ft_initialize_map_content(cub3d);
	ft_parse_map_content(cub3d);
	ft_allocate_map_maze(cub3d);
	ft_populate_maze_grid(cub3d);
	ft_init_cub3d_game(cub3d);
}