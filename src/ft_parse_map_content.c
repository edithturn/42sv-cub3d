/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_map_content.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:33:32 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/12 01:19:06 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int		ft_parse_map_content(t_cub3d *cub3d)
{
	char *line;

	if ((cub3d->map.fd = open(cub3d->map.file, O_RDONLY)) == -1)
		printf("%s", "ERROR READING");
	while((get_next_line(cub3d->map.fd, &line)) > 0)
	{
		if (ft_map_content_is_resolution(line))
			ft_parse_window_resolution(&cub3d->map, line);
		else if (ft_map_content_is_no(line))
			ft_parse_texture_paths(&cub3d->map.texture.path[e_north], line + 2);
		else if (ft_map_content_is_so(line))
			ft_parse_texture_paths(&cub3d->map.texture.path[e_south], line + 2);
		else if (ft_map_content_is_we(line))
			ft_parse_texture_paths(&cub3d->map.texture.path[e_west], line + 2);
		else if (ft_map_content_is_ea(line))
			ft_parse_texture_paths(&cub3d->map.texture.path[e_east], line + 2);
		else if (ft_map_content_is_s(line))
			ft_parse_texture_paths(&cub3d->map.texture.path[e_sprite], line + 2);
		else if (ft_map_content_is_floor(line) )
			ft_parse_floor_color(&cub3d->map, line);
		else if (ft_map_content_is_celing(line))
			ft_parse_ceilling_color(&cub3d->map, line);
		else if (*line == '\0')
			;
		else{
			if((int)ft_strlen(line) > cub3d->map.maze.cols)
				cub3d->map.maze.cols = ft_strlen(line);
			cub3d->map.maze.rows++;
		}
		free(line);
	}
	free(line);
	close(cub3d->map.fd);

	printf("COL %d\n",  cub3d->map.maze.cols);
	printf("ROWS %d\n",  cub3d->map.maze.rows);
	return (1);
}