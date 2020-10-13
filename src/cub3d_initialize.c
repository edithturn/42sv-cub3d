/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_initialize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:57:12 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/11 02:50:37 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cub3d_initialize()
{
	void	*mlx_ptr;
	void 	*win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr,500, 500, "mlx 42" );
	mlx_loop(mlx_ptr);
  }