/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_parse_resolution.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:44:07 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/15 15:42:34 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int	cub3d_parse_resolution(t_map *map, char *line)
{
  	int x_resolution;
	int y_resolution;

	while (!ft_isdigit(*line))
	 	line++;
	x_resolution = ft_atoi(line);
	map->width = x_resolution;
	printf("map->width %d\n", map->width);
	line += ft_strlen(ft_itoa(x_resolution));	
	while (!ft_isdigit(*line))
		line++;
	y_resolution = ft_atoi(line);
	map->heigth = y_resolution;
	printf("map->heigth %d\n", map->heigth);
	return (0);
}