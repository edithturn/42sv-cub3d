/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:57:12 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/01 01:11:09 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int		ft_init_cub3d_game(t_map *map)
{
	void	*mlx;
	void	*win1;
	t_image	image;

  if (!(mlx = mlx_init()))
    {
      printf(" !! KO !!\n");
      exit(1);
    }

  if (!(win1 = mlx_new_window(mlx, map->window.width, map->window.heigth,"Title1")))
    {
      printf(" !! KO !!\n");
      exit(1);
    }

	image.img = mlx_new_image(mlx, 1920, 1080);
	image.addr = mlx_get_data_addr(image.img, &image.bits_per_pixel, &image.line_length,
                                 &image.endian);
	//my_mlx_pixel_put(&img, 10, 10, 0x0055FF33);
	//draw_line(&data, 100, 120, 200, 500 , 0x0055FF33 );
	//ft_square(&data, 100, 120, 70, 0x00FFFF00);

	draw_line(&image, 50, 80, 500, 100, 0x00FFFF00);
	draw_line(&image, 100, 120, 200, 500, 0x0055FF33);
	ft_square(&image, 100, 120, 500, 0x00FFFF00);
	mlx_put_image_to_window(mlx, win1, image.img, 300, 300);

	printf("OK\n");
	mlx_loop(mlx);

	return (0);
}