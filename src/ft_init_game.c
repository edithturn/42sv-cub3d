/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:57:12 by epuclla           #+#    #+#             */
/*   Updated: 2020/11/26 16:44:33 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int		ft_init_game(t_map *map)
{
	void	*mlx;
	void	*win1;
	t_data	data;

  if (!(mlx = mlx_init()))
    {
      printf(" !! KO !!\n");
      exit(1);
    }

  if (!(win1 = mlx_new_window(mlx, map->width, map->heigth,"Title1")))
    {
      printf(" !! KO !!\n");
      exit(1);
    }

	data.img = mlx_new_image(mlx, 1920, 1080);
	data.addr = mlx_get_data_addr(data.img, &data.bits_per_pixel, &data.line_length,
                                 &data.endian);
	//my_mlx_pixel_put(&img, 10, 10, 0x0055FF33);
	//draw_line(&data, 100, 120, 200, 500 , 0x0055FF33 );
	//ft_square(&data, 100, 120, 70, 0x00FFFF00);

	draw_line(&data, 50, 80, 500, 100, 0x00FFFF00);
	draw_line(&data, 100, 120, 200, 500, 0x0055FF33);
	ft_square(&data, 100, 120, 500, 0x00FFFF00);
	mlx_put_image_to_window(mlx, win1, data.img, 300, 300);

	printf("OK\n");
	mlx_loop(mlx);

	return (0);
}