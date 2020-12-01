/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figures.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 12:53:10 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/01 01:07:55 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

void    my_mlx_pixel_put(t_image *image, int x, int y, int color)
{
    char    *dst;

    dst = image->addr + (y * image->line_length + x * (image->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}

void		draw_line(t_image *image, int x1, int y1, int x2, int y2, int color)
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
		my_mlx_pixel_put(image, x, y, color);
		x += dx;
		y += dy;
		i++;
	}
}

void		ft_square(t_image *data, int x, int y, int size, int color)
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
			my_mlx_pixel_put(data, x, y, color);
			x++;
			j++;
		}
		y++;
		i++;
		x = original_pos;
		j = 0;
	}
}

void		ft_draw_grid(t_image *image, int x1, int y1, int x2, int y2, int color)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < x1)
	{
		draw_line(image, x1, i * y1, x2,	i * y2, color);
		i++;
	}
	while (j < y1)
	{
		draw_line(image, j * x1, y1, j * x2, y2, color);
		j++;
	}
}