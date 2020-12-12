/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:01:14 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/12 01:25:55 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void ft_init_game(t_cub3d *cub3d)
{
	ft_initialize_map_content(cub3d);
	ft_parse_map_content(cub3d);
	ft_allocate_map_maze(cub3d);
	ft_populate_maze_grid(cub3d);
}