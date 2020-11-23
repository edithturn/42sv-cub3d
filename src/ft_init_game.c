/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:57:12 by epuclla           #+#    #+#             */
/*   Updated: 2020/11/23 11:14:53 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

void    my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
    char    *dst;

    dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}

int		ft_init_game(t_map *map)
{
	void	*mlx;
	void	*win1;
	t_data  img;

  if (!(mlx = mlx_init()))
    {
      printf(" !! KO !!\n");
      exit(1);
    }

  if (!(win1 = mlx_new_window(mlx, map->width,map->heigth,"Title1")))
    {
      printf(" !! KO !!\n");
      exit(1);
    }

	img.img = mlx_new_image(mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
                                 &img.endian);
	my_mlx_pixel_put(&img, 10, 10, 0x0055FF33);
	mlx_put_image_to_window(mlx, win1, img.img, 300, 300);

	printf("OK\n");
	mlx_loop(mlx);

	return (0);
}