/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_initialize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:57:12 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/15 21:33:50 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

void		cub3d_initialize(t_map *map)
{
	//int	a;
	//#int	local_endian;
	void	*mlx;
	void	*win1;

//   a = 0x11223344;
//   if (((unsigned char *)&a)[0] == 0x11)
//     local_endian = 1;
//   else
//     local_endian = 0;

  if (!(mlx = mlx_init()))
    {
      printf(" !! KO !!\n");
      exit(1);
    }

  if (!(win1 = mlx_new_window(mlx,map->width,map->heigth,"Title1")))
    {
      printf(" !! KO !!\n");
      exit(1);
    }
	printf("OK\n");
	mlx_loop(mlx);
  }