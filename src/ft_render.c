/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 09:01:41 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/15 11:41:29 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int			ft_cub2D(t_cub3d *cub3d)
{
	//ft_draw_grid(cub3d, RED);
	draw_map(cub3d, GREEN, WHITE);
	draw_player(cub3d, cub3d->player.pos_x, cub3d->player.pos_y,
				cub3d->map.tile_size / 4, cub3d->player.color);
	return(0);
}

/*int			ft_render(t_cub3d *cub3d)
{
	mlx_destroy_image(cub3d->mlx.mlx, cub3d->image.img);
	if ((cub3d->mlx.img = mlx_new_image(cub3d->mlx.mlx, cub3d->map.window.width,
									cub3d->map.window.width)) == NULL)
		return (1);
	if ((cub3d->data.addr = mlx_get_data_addr(cub3d->mlx.img, &cub3d->data.bits_per_pixel,
									&cub3d->data.line_length, &cub3d->data.endian)) == NULL)
		return (1);
	ft_cub2D(cub3d);
	mlx_put_image_to_window(cub3d->mlx.mlx, cub3d->mlx.window, cub3d->mlx.img, 0, 0);
	return (0);
}*/