/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:45:30 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/15 16:21:49 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"


int		deal_key(int key_code)
{
	if (key_code == KEY_ESC)
		exit(0);
	return (0);
}
int 	closeu()
{
		exit(0);
}

int main(int ac, char **ag)
{
	t_cub3d	cub3d;

	ft_memset(&cub3d, 0, sizeof(t_cub3d));

	if (ac ==1 || ac > 3 )
		printf("%s", "Invalid number parameters");

	if(!ft_is_file_correct_format(cub3d.map.file  = ag[1]))
			return (FAILED);
	ft_init_game(&cub3d);
	mlx_hook(cub3d.win, X_EVENT_KEY_PRESS, 0, &deal_key, &cub3d);
	mlx_hook(cub3d.win, X_EVENT_KEY_EXIT, 0, &closeu, &cub3d);

	//mlx_loop_hook(cub3d.mlx.mlx, &main_loop, &cub3d);
	mlx_loop(cub3d.mlx.mlx);
	return (1);
}