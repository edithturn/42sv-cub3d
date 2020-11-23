/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_general_parse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:33:32 by epuclla           #+#    #+#             */
/*   Updated: 2020/11/23 12:03:18 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

void	ft_parse_resolution(t_map *map, char *line)
{
  	int x_resolution;
	int y_resolution;

	while (!ft_isdigit(*line))
	 	line++;
	x_resolution = ft_atoi(line);
	map->width = x_resolution;
	printf("map->width %d\n", map->width);
	line += ft_strlen(ft_itoa(x_resolution));	
	while (!ft_isdigit(*line ))
		line++;
	y_resolution = ft_atoi(line);
	map->heigth = y_resolution;
	printf("map->heigth %d\n", map->heigth);

}

void ft_parse_path(char **path, char *line)
{
	*path = ft_strtrim(line, "  ");
	printf("%s\n", *path);
}

int		ft_general_parse(t_map *map)
{
	char  *line;
	int fd;
	int ret;
	ret = 0;

	fd = open(map->file,O_RDONLY);
	while((ret = get_next_line(fd, &line)) > 0)
	{
		if (*line == 'R' && *(line + 1) == ' ')
			ft_parse_resolution(map, line);
		else if (*line == 'N' && *(line + 1) == 'O' && *(line + 2) == ' ' && (!(map->texture[e_north])))
			ft_parse_path(&map->texture[e_north], line + 2);			
		else if (*line == 'S' && *(line + 1) == 'O' && *(line + 2) == ' ' && (!(map->texture[e_south])))
			ft_parse_path(&map->texture[e_south], line + 2);
		else if (*line == 'W' && *(line + 1) == 'E' && *(line + 2) == ' ' && (!(map->texture[e_west])))
			ft_parse_path(&map->texture[e_west], line + 2);
		else if (*line == 'E' && *(line + 1) == 'A' && *(line + 2) == ' ' && (!(map->texture[e_east])))
			ft_parse_path(&map->texture[e_east], line + 2);
		else if (*line == 'S' && *(line + 1) == ' '  && (!(map->texture[e_sprite])))
			ft_parse_path(&map->texture[e_sprite], line + 2);
		else
		{
			printf("%s\n", "INVALID FORMAT");
			return (0);
		}
		free(line);
	}

	free(line);
	close(fd);

	return (0);
}