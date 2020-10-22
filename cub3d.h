/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 21:16:46 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/21 11:31:51 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include <math.h>
# include <fcntl.h>
# include "minilibx_linux/mlx.h"
# include "minilibx_mac/mlx.h"
# include "gnl/get_next_line.h"
# include "libft/libft.h"

enum				e_path
{
	e_north,
	e_south,
	e_west,
	e_east,
	e_sprite
};



typedef struct	s_map
{
	int		width;
	int		heigth;
	char	*path[5];
	char	*file;
}		t_map;


typedef struct  s_data {
	void		*img;
	char		*addr;
	int				bits_per_pixel;
	int				line_length;
	int				endian;
}				t_data;

// Functions
int			cub3d_validations(t_map *map);
int			cub3d_read(t_map *map);
//int		cub3d_validate_resolution(char *line);
void		cub3d_parse_resolution(t_map *map, char *line);
void		cub3d_parse_map(char *line);
void		cub3d_initialize(t_map *map);
void 		cub3d_parse_path(char **path, char *line);
# endif