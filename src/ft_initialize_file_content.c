/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_file_content.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:36:59 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/01 01:29:46 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int ft_initialize_file_content(char *fd, t_cub3d *cub3d)
{
	int					n;
	char			*line;
	line = fd;
	cub3d->map.window.heigth = 0;
	cub3d->map.window.width = 0;
	n = 0;
	while (n < 5)
		cub3d->map.texture.file[n++] = 0;
	n = 0;
	while (n < 4)
	{
		cub3d->map.color.ceiling_color[n++] = 0;
		cub3d->map.color.floor_color[n++] = 0;
	}
	cub3d->map.maze.rows = 0;
	cub3d->map.maze.cols = 0;

	printf("%s", line);
	return 0;
}