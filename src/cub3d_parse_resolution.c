/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_parse_resolution.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:44:07 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/14 11:50:59 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"
int	cub3d_parse_resolution(t_map *map, char *line)
{
	//read all the file or read the first line, look for R and start looking for digits
	 
 	int resolution;
	while (!ft_isdigit(*line))
	 	line++;
	resolution = *line;
	map->width = resolution;
	printf("%d", map->width);
	printf("%d", 4);

	return (0);
}