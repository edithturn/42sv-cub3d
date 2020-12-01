/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 21:16:46 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/01 01:31:07 by epuclla          ###   ########.fr       */
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

// Enum for  texture
enum				e_path
{
	e_north,
	e_south,
	e_west,
	e_east,
	e_sprite
};

// Enum for colors
enum				e_colors
{
	e_R,
	e_G,
	e_B
};

// Structure for file
typedef struct s_file
{
	char		*file;
	t_list		*content;
} t_file;

// Structure for image
typedef struct s_image
{
	void		*img;
	char		*addr;
	int				bits_per_pixel;
	int				line_length;
	int				endian;
} t_image;

// Structure for window
typedef struct s_window
{
	int			width;
	int			heigth;
} t_window;

// Structure for textures
typedef struct s_textures
{
	char		*file[5];
} t_texture;

// Structure for colors
typedef struct s_color
{
	int			floor_color[3];
	int			ceiling_color[3];
} t_color;

// Structuree for maze
typedef struct	s_maze
{
	int			rows;
	int			 cols;
	char		**arr;
	int			cpx;
	int			cpy;
	int			c_alpha;
	//unsigned short nbr_sprites;
}		t_maze;

typedef	struct s_map
{
	t_window 		window;
	t_texture 			texture;
	t_color 			color;
	t_maze 				maze;
} t_map;

typedef	struct s_cub3d
{
	t_file 				file;
	t_image 		image;
	t_map			map;
}	t_cub3d;





// as
int 	main(int ac, char **ag);
int	 	ft_initialize_file_content(char *fd, t_cub3d *cub3d);
int		ft_parse_file_content(char *file, t_map *map);
int	 	ft_general_error(int n);
void	ft_square(t_image *data, int x, int y, int size, int color);
void		draw_line(t_image *image, int x1, int y1, int x2, int y2, int color);

int ft_is_file_correct_format(char *file_name);
int	ft_general_error(int n);
int	ft_close(int fd);
int		ft_init_cub3d_game(t_map *map);

# define FAILED						-1
# define TEXTURES				4
# define SUCCESS				1

# endif