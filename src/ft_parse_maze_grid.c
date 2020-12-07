/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_maze_grid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:52:56 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/06 20:39:19 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int ft_parse_map_grid(char *file, t_map *map)
{
	char	*line;
	int row, ret;
	printf("%s","PARSE MAP GRID");
	row = 0;
	map->file.i_fd  = open(file, O_RDONLY);
	if(map->file.i_fd == -1)
		return (-1);
	while((ret = get_next_line(map->file.i_fd , &line)) > 0)
	{
		if (ft_map_content_is_resolution(line) || ft_map_content_is_no(line, map) || ft_map_content_is_so(line, map) ||
		ft_map_content_is_we(line, map) || ft_map_content_is_ea(line, map) || ft_map_content_is_s(line, map) ||
		ft_map_content_is_floor(line) || ft_map_content_is_celing(line) || (*line == '\0'))
		;
		else
			ft_parse_populate_maze(row++, line, map);
		free(line);
	}
	free(line);
	close(map->file.i_fd);
	return (1);
}

void ft_parse_populate_maze(int row, char *line, t_map *map)
{
	int col;

	col = 0;
	
	while(*line && col < map->maze.cols)
	{
		if(*line == 32)
		{
			map->maze.grid[row][col] = 7;
			printf("%d", map->maze.grid[row][col]);
		}
		else if (ft_isdigit(*line))
		{
			map->maze.grid[row][col] = *line - 48;
			printf("%d", map->maze.grid[row][col]);
		}
		col++;
		line++;
	}
	while (col < map->maze.cols)
	{
		map->maze.grid[row][col] = 0;
		col++;
	}
}