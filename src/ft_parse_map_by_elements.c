/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_map_by_elements.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 01:07:28 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/12 01:20:04 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

void	ft_parse_window_resolution(t_map *map, char *line)
{
  	int width;
	int heigth;

	while (!ft_isdigit(*line))
	 	line++;
	width = ft_atoi(line);
	map->window.width = width;
	printf("map->width %d\n", map->window.width);
	line += ft_strlen(ft_itoa(width));
	while (!ft_isdigit(*line ))
		line++;
	heigth = ft_atoi(line);
	map->window.heigth = heigth;
	printf("cub3d->map.heigth %d\n", map->window.heigth);

}

void ft_parse_texture_paths(char **path, char *line)
{
	*path = ft_strtrim(line, "  ");
	printf("%s\n", *path);
}

void ft_parse_floor_color(t_map *map, char *line) //R,G,B colors in range [0,255]: 0, 255, 255
{
	while (!ft_isdigit(*line))
	 	line++;
	map->color.floor_color[e_R]  = ft_atoi(line);
	printf("%d\n", map->color.floor_color[e_R]);
	line += ft_strlen(ft_itoa(map->color.floor_color[e_R]));
	while (!ft_isdigit(*line ))
		line++;
	map->color.floor_color[e_G] = ft_atoi(line);
	printf("%d\n", map->color.floor_color[e_G]);
	line += ft_strlen(ft_itoa(map->color.floor_color[e_G]));
	while (!ft_isdigit(*line ))
		line++;
	map->color.floor_color[e_B] = ft_atoi(line);
	printf("%d\n", map->color.floor_color[e_B]);
}

void ft_parse_ceilling_color(t_map *map, char *line)
{
	while (!ft_isdigit(*line))
	 	line++;
	map->color.ceiling_color[e_R]  = ft_atoi(line);
	printf("%d\n", map->color.ceiling_color[e_R]);
	line += ft_strlen(ft_itoa(map->color.ceiling_color[e_R]));
	while (!ft_isdigit(*line ))
		line++;
	map->color.ceiling_color[e_G] = ft_atoi(line);
	printf("%d\n", map->color.ceiling_color[e_G]);
	line += ft_strlen(ft_itoa(map->color.ceiling_color[e_G]));
	while (!ft_isdigit(*line ))
		line++;
	map->color.ceiling_color[e_B] = ft_atoi(line);
	printf("%d\n", map->color.ceiling_color[e_B]);
}