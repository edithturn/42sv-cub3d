/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_populate_maze_grid.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:52:56 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/12 01:34:41 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int ft_populate_maze_grid(t_cub3d *cub3d)
{
	char	*line;
	int row;
	
	row = 0;
	
	if((cub3d->map.fd = open(cub3d->map.file, O_RDONLY)) == -1)
		printf("%s","Error in Maze grid");
	while(get_next_line(cub3d->map.fd , &line) > 0)
	{
		if (ft_map_content_is_resolution(line) || ft_map_content_is_no(line) || ft_map_content_is_so(line) ||
		ft_map_content_is_we(line) || ft_map_content_is_ea(line) || ft_map_content_is_s(line) ||
		ft_map_content_is_floor(line) || ft_map_content_is_celing(line) || (*line == '\0'))
		;
		else
				ft_parse_maze(row++, line, cub3d);
		free(line);
	}
	free(line);
	close(cub3d->map.fd);
	return (1);
}

void ft_parse_maze(int row, char *line, t_cub3d *cub3d)
{
	int col;

	col = 0;
	while(*line && col < cub3d->map.maze.cols)
	{
		if(*line == 32)
			cub3d->map.maze.grid[row][col] = 3;
		if (ft_isdigit(*line))
			cub3d->map.maze.grid[row][col] = *line - 48;
		printf("%d", cub3d->map.maze.grid[row][col]);
		++col;
		++line;
	}
	while (col < cub3d->map.maze.cols)
	{
		cub3d->map.maze.grid[row][col] = 4;
		printf("%d", cub3d->map.maze.grid[row][col]);
		++col;
	}
	printf("\n");
}