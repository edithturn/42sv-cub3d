/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_file_content.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:33:32 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/06 20:41:41 by epuclla          ###   ########.fr       */
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
	printf("map->heigth %d\n", map->window.heigth);

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

int		ft_parse_file_content(char *file, t_map *map)
{
	char  *line;
	printf("%s","parse_file_content end START");
	map->file.i_fd = open(file, O_RDONLY);

	if(map->file.i_fd == -1)
		return (-1);
	while((get_next_line(map->file.i_fd, &line)) > 0)
	{
		if (ft_map_content_is_resolution(line))
			ft_parse_window_resolution(map, line);
		else if (ft_map_content_is_no(line, map))
			ft_parse_texture_paths(&map->texture.file[e_north], line + 2);
		else if (ft_map_content_is_so(line, map))
			ft_parse_texture_paths(&map->texture.file[e_south], line + 2);
		else if (ft_map_content_is_we(line, map))
			ft_parse_texture_paths(&map->texture.file[e_west], line + 2);
		else if (ft_map_content_is_ea(line, map))
			ft_parse_texture_paths(&map->texture.file[e_east], line + 2);
		else if (ft_map_content_is_s(line, map))
			ft_parse_texture_paths(&map->texture.file[e_sprite], line + 2);
		else if (ft_map_content_is_floor(line) )
			ft_parse_floor_color(map, line);
		else if (ft_map_content_is_celing(line))
			ft_parse_ceilling_color(map, line);
		else if (*line == '\0')
			;
		else{
			if((int)ft_strlen(line) > map->maze.cols)
				map->maze.cols = ft_strlen(line);
			map->maze.rows++;
		}
		free(line);
	}
	if((int)ft_strlen(line) > map->maze.cols)
			map->maze.cols = ft_strlen(line);
	map->maze.rows++;

	free(line);
	close(map->file.i_fd);
	//ft_create_maze(&map->maze);
	printf("%s","ft_parse_map_grid");
	ft_parse_map_grid(file, map);
	return (0);
}