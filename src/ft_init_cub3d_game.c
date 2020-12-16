/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_cub3d_game.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:57:12 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/15 10:28:21 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int		ft_init_cub3d_game(t_cub3d *cub3d)
{
	void	*mlx;
	void	*win1;

  if (!(mlx = mlx_init()))
    {
      printf(" !! KO !!\n");
      exit(1);
    }

  if (!(win1 = mlx_new_window(mlx, cub3d->map.window.width, cub3d->map.window.height,"Title1")))
    {
      printf(" !! KO !!\n");
      exit(1);
    }

	cub3d->image.img = mlx_new_image(mlx, 500, 500);
	cub3d->image.addr = mlx_get_data_addr(cub3d->image.img, &cub3d->image.bits_per_pixel, &cub3d->image.line_length,
                                 &cub3d->image.endian);

	//ft_draw_grid(cub3d, 0x000000FF);
	//ft_render(cub3d);
	ft_cub2D(cub3d);
	mlx_put_image_to_window(mlx, win1, cub3d->image.img, 50, 50);

	printf("OK\n");
	mlx_loop(mlx);

	return (0);
}