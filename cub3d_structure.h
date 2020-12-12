/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_structure.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 21:16:46 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/10 15:12:52 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_STRUCTURE_H
# define CUB3D_STRUCTURE_H

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
	char		*path[5];
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
	char		*arr[Y];
	int			cpx;
	int			**grid;
	int			cpy;
	int			c_alpha;
	int			ft_copy_maze;
	//unsigned short nbr_sprites;
}		t_maze;

typedef	struct s_map
{
	char				*file;
	int						fd;
	t_list				*content;
	t_window 		window;
	t_texture 			texture;
	t_color 			color;
	t_maze 				maze;
} t_map;

typedef	struct s_cub3d
{
	void			*mlx;
	void			*win;
	t_image 		image;
	t_map			map;
}	t_cub3d;


# endif