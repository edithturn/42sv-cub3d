/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_figures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 12:53:10 by epuclla           #+#    #+#             */
/*   Updated: 2020/11/19 12:55:16 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

void		draw_line(t_map *map, int x1, int y1, int x2, int y2, int color)
{
	int		i;
	int		x;
	int		y;
	int		dx;
	int		dy;
	int		step;

	dx = abs(x2 - x1);
	dy = abs(y2 - y1);
	if (dx >= dy)
		step = dx;
	else
		step = dy;
	dx /= step;
	dy /= step;
	x = x1;
	y = y1;
	i = 1;
	while (i <= step)
	{
		my_mlx_pixel_put(map, x, y, color);
		x += dx;
		y += dy;
		i++;
	}
}