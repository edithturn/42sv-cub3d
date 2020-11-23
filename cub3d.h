/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 21:16:46 by epuclla           #+#    #+#             */
/*   Updated: 2020/11/23 12:15:01 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <fcntl.h>
# include <math.h>
# include <stdio.h>
# include <stdint.h>
# include "mlx.h"
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
	char	*texture[5];
	int		floor_color;
	int		ceiling_color;
	char		*file;
	t_list		*content;
	int	rows;
	int cols;
	char	**arr;
	int		cpx;
	int		cpy;
	int		c_alpha;
	unsigned short nbr_sprites;
}		t_map;

typedef	struct s_cub3d
{
	t_map map;
}	t_cub3d;


typedef struct  s_data {
	void		*img;
	char		*addr;
	int				bits_per_pixel;
	int				line_length;
	int				endian;
}				t_data;



// as
int main(int ac, char **ag);

// validations
int ft_is_cub_format(char *ag);

// Parse
void			ft_parse_resolution(t_map *map, char *line);
void 			ft_parse_path(char **path, char *line);
int				ft_general_parse(t_map *map);

// Init Game
int				ft_init_game(t_map *map);

// Error Handle
int				ft_general_error(int n);
int				ft_perror_free_map(int n, t_map *map);

# define FAILED						-1
# define TEXTURES				4
# define SUCCESS				1

# endif