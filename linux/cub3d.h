/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:16:03 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/11 16:55:57 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include <math.h>
# include <fcntl.h>
# include "minilibx/mlx.h"
# include "libft/libft.h"

typedef struct	s_map
{
	int		width;
	int		heigth;
	char	*file;
}		t_map;

// Functions
int cub3d_validations(char *file, t_map *map);
int	cub3d_read(t_map *map);
# endif