/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_read.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:33:32 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/16 01:14:01 by epuclla          ###   ########.fr       */
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
		if (*line == 'R' && *(line + 1) == ' ')
			cub3d_parse_resolution(map, line);
		else if (*line == 'N' && *(line + 1) == 'O' && *(line + 2) == ' ' && (!(map->path[e_north])))
			cub3d_parse_path(&map->path[e_north], line + 2);			
		else if (*line == 'S' && *(line + 1) == 'O' && *(line + 2) == ' ' && (!(map->path[e_south])))
			cub3d_parse_path(&map->path[e_south], line + 2);
		else if (*line == 'W' && *(line + 1) == 'E' && *(line + 2) == ' ' && (!(map->path[e_west])))
			cub3d_parse_path(&map->path[e_west], line + 2);
		else if (*line == 'E' && *(line + 1) == 'A' && *(line + 2) == ' ' && (!(map->path[e_east])))
			cub3d_parse_path(&map->path[e_east], line + 2);
		else if (*line == 'S' && *(line + 1) == ' '  && (!(map->path[e_sprite])))
			cub3d_parse_path(&map->path[e_sprite], line + 2);
		else
		{
			printf("%s\n", "INVALID FORMAT");
			return (0);
		}
		free(line);

		//!(map->path[e_east]
		// map->path[e_east] != NULL
	}

	free(line);
	close(fd);

//win_ptr = mlx_new_window(mlx_ptr,500, 500, "mlx 42" );
//mlx_loop(mlx_ptr);
	return (0);
}