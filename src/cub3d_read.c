/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_read.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:33:32 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/14 11:44:09 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int	cub3d_read(t_map *map)
{
	char  *line;
	int fd;
	int ret;
	ret = 0;

	fd = open(map->file,O_RDONLY);
	while((ret = get_next_line(fd, &line)) > 0)
	{
		if (cub3d_validate_resolution(line))
			cub3d_parse_resolution(map, line);
		free(line);
	}
	//printf("%s\n", line);
	free(line);
	close(fd);

//win_ptr = mlx_new_window(mlx_ptr,500, 500, "mlx 42" );
//mlx_loop(mlx_ptr);
	return (0);
}