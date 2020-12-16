/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 21:16:46 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/15 10:28:55 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <fcntl.h>
# include <math.h>
# include <stdio.h>
# include <stdint.h>
# include "mlx.h"
# include "config.h"
# include "minilibx_linux/mlx.h"
# include "minilibx_mac/mlx.h"
# include "gnl/get_next_line.h"
# include "libft/libft.h"
# include "cub3d_structure.h"

int 		main(int ac, char **ag);
void 	ft_init_game(t_cub3d *cub3d);
int 		ft_initialize_map_content(t_cub3d *cub3d);
int			ft_parse_map_content(t_cub3d *cub3d);
void		ft_allocate_map_maze(t_cub3d *cub3d);
int 		ft_populate_maze_grid(t_cub3d *cub3d);
void ft_parse_maze(int row, char *line, t_cub3d *cub3d);
int		ft_init_cub3d_game(t_cub3d *cub3d);

int		ft_is_file_correct_format(char *file_name);
int	 	ft_general_error(int n);
int		ft_close(int fd);
int 	ft_create_maze(t_maze *maze);


int		ft_map_content_is_resolution(char *line);
int		ft_map_content_is_no(char *line);
int		ft_map_content_is_so(char *line);
int		ft_map_content_is_we(char *line);
int		ft_map_content_is_ea(char *line);
int		ft_map_content_is_s(char *line);
int		ft_map_content_is_floor(char *line);
int		ft_map_content_is_celing(char *line);

void	ft_parse_window_resolution(t_map *map, char *line);
void 	ft_parse_texture_paths(char **path, char *line);
void	 ft_parse_floor_color(t_map *map, char *line);
void 	ft_parse_ceilling_color(t_map *map, char *line);


void		ft_draw_grid(t_cub3d *cub3d, int color);
void		draw_line(t_cub3d *cub3d, int x1, int y1, int x2, int y2, int color);
void    my_mlx_pixel_put(t_image *image, int x, int y, int color);

int			ft_cub2D(t_cub3d *cub3d);
//int			ft_render(t_cub3d *cub3d);


void		draw_player(t_cub3d *cub3d, int pos_x, int pos_y, int size, int color);
void		draw_map(t_cub3d *cub3d, int wallcol, int floorcol);
void		ft_draw_grid(t_cub3d *cub3d, int color);
void		ft_square(t_cub3d *cub3d, int x, int y, int size, int color);
void		draw_line(t_cub3d *cub3d, int x1, int y1, int x2, int y2, int color);
# endif