/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figures.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 12:53:10 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/15 11:07:02 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

void    my_mlx_pixel_put(t_image *image, int x, int y, int color)
{
    char    *dst;

    dst = image->addr + (y * image->line_length + x * (image->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}

void		draw_line(t_cub3d *cub3d, int x1, int y1, int x2, int y2, int color)
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
		my_mlx_pixel_put(&cub3d->image, x, y, color);
		x += dx;
		y += dy;
		i++;
	}
}

void		ft_square(t_cub3d *cub3d, int x, int y, int size, int color)
{
	int		i;
	int		j;
	int		original_pos;

	i = 0;
	j = 0;
	original_pos = x;
	while (i < size)
	{
		while (j < size)
		{
			my_mlx_pixel_put(&cub3d->image, x, y, color);
			x++;
			j++;
		}
		y++;
		i++;
		x = original_pos;
		j = 0;
	}
}

void		ft_draw_grid(t_cub3d *cub3d, int color)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 1)
	{
		draw_line(cub3d, 0, i * cub3d->map.tile_size, cub3d->map.window.width,
					i * cub3d->map.tile_size, color);
		i++;
	}
	while (j < 1)
	{
		draw_line(cub3d, j * cub3d->map.tile_size, 0, j * cub3d->map.tile_size,
					cub3d->map.window.height, color);
		j++;
	}
}

void		draw_map(t_cub3d *cub3d, int wallcol, int floorcol)
{
	int		i;
	int		j;
	int		tile_x;
	int		tile_y;

	i = 0;
	while (i < cub3d->map.maze.rows)
	{
		j = 0;
		while (j < cub3d->map.maze.cols)
		{
			tile_x = j * cub3d->map.tile_size;
			tile_y = i * cub3d->map.tile_size;
			if (cub3d->map.maze.grid[i][j] > 0)
				ft_square(cub3d, tile_x, tile_y, cub3d->map.tile_size, wallcol);
			else
				ft_square(cub3d, tile_x, tile_y, cub3d->map.tile_size, floorcol);
			j++;
		}
		i++;
	}
}

void		draw_player(t_cub3d *cub3d, int pos_x, int pos_y, int size, int color)
{
	int		i;
	int		j;
	int		original_pos;

	i = 0;
	
	original_pos = pos_x;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			my_mlx_pixel_put(&cub3d->image, pos_x, pos_y, color);
			pos_x++;
			j++;
		}
		pos_y++;
		i++;
		pos_x = original_pos;
		j = 0;
	}
}
