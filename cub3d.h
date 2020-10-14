/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 11:24:31 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/14 11:40:19 by epuclla          ###   ########.fr       */
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

typedef struct	s_map
{
	int		width;
	int		heigth;
	char	*file;
}		t_map;

// Functions
int		cub3d_validations(t_map *map);
int		cub3d_read(t_map *map);
int		cub3d_validate_resolution(char *line);
int		cub3d_parse_resolution(t_map *map, char *line);
int		cub3d_parse_map(char *line);
# endif