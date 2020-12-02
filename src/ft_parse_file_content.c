/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_file_content.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:33:32 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/02 00:03:03 by epuclla          ###   ########.fr       */
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
void ft_parse_ceilling_solor(t_map *map, char *line)
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
	int fd;
	int ret;
	ret = 0;

	fd = open(file, O_RDONLY);
	if(fd == -1)
		return (-1);
	while((ret = get_next_line(fd, &line)) > 0)
	{
		if (*line == 'R' && *(line + 1) == ' ')
			ft_parse_window_resolution(map, line);
		else if (*line == 'N' && *(line + 1) == 'O' && *(line + 2) == ' ' && (!(map->texture.file[e_north])))
			ft_parse_texture_paths(&map->texture.file[e_north], line + 2);			
		else if (*line == 'S' && *(line + 1) == 'O' && *(line + 2) == ' ' && (!(map->texture.file[e_south])))
			ft_parse_texture_paths(&map->texture.file[e_south], line + 2);
		else if (*line == 'W' && *(line + 1) == 'E' && *(line + 2) == ' ' && (!(map->texture.file[e_west])))
			ft_parse_texture_paths(&map->texture.file[e_west], line + 2);
		else if (*line == 'E' && *(line + 1) == 'A' && *(line + 2) == ' ' && (!(map->texture.file[e_east])))
			ft_parse_texture_paths(&map->texture.file[e_east], line + 2);
		else if (*line == 'S' && *(line + 1) == ' '  && (!(map->texture.file[e_sprite])))
			ft_parse_texture_paths(&map->texture.file[e_sprite], line + 2);
		else if (*line == 'F' && *(line + 1) == ' ' )
			ft_parse_floor_color(map, line);
		else if (*line == 'C' && *(line + 1) == ' ' )
			ft_parse_ceilling_solor(map, line);
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
	ft_create_maze(&map->maze);
	free(line);
	close(fd);

	return (0);
}