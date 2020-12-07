/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_maze.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:31:53 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/02 12:33:50 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int ft_create_maze(t_maze *maze)
{
	/* 2D array declaration */
	int disp[maze->rows][maze->cols];
	int i, j;
	i = 0;

	while (i < maze->rows)
	{
		j = 0;
		while (j < maze->cols )
		{
			//disp[i][j] = ft_read_copy_maze(maze);
			disp[i][j] =  0;
			printf("%d", disp[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}

return (0);
}