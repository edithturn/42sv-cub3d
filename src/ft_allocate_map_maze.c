/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate_map_maze.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 23:54:18 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/12 01:21:40 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_allocate_map_maze(t_cub3d *cub3d)
{
	int i;

	i = 0;
	if(!(cub3d->map.maze.rows >0) && cub3d->map.maze.cols > 0)
		printf("%s", "Invalid Maze");
	cub3d->map.maze.grid = malloc(cub3d->map.maze.rows * sizeof(int *));
	if (!cub3d->map.maze.grid)
		printf("%s", "Error allocation maze");
	while(i < cub3d->map.maze.rows)
	{
		cub3d->map.maze.grid[i] = malloc(cub3d->map.maze.cols * sizeof(int));
		if(!cub3d->map.maze.grid[i])
			printf("%s", "Error allocatin maze grid");
		++i;
	}
}