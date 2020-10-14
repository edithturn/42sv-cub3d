# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/02 10:09:06 by epuclla           #+#    #+#              #
#    Updated: 2020/10/14 11:49:21 by epuclla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= src/cub3d.c  src/cub3d_validations.c src/cub3d_read.c src/cub3d_validate_resolution.c src/cub3d_parse_resolution.c

OBJS_CUB3D		= $(SRCS:.c=.o)

MLX_PATH		= minilibx_mac

LIBFT_PATH = libft

GNL_PATH = gnl

CFLAGS		= -Wall -Wextra -Werror

UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Darwin)
	SO_LIBS = -L$(MLX_PATH) -I includes -lmlx -framework OpenGL -framework AppKit -lz
endif

ifeq ($(UNAME_S),Linux)
	MLX_PATH = minilibx_linux
	SO_LIBS  = -lmlx -lXext -lX11 -lm -lbsd -L$(MLX_PATH)
endif


MLX_NAME	= libmlx.a

LIBFT_NAME = libft.a

GNL_NAME = gnl.a

NAME		= cub3d

all:		$(NAME)

$(NAME):	$(MLX_NAME)  $(LIBFT_NAME) $(GNL_NAME) $(OBJS_CUB3D)
			gcc $(CFLAGS) -o $(NAME) $(OBJS_CUB3D)  $(SO_LIBS) $(MLX_PATH)/$(MLX_NAME) $(GNL_PATH)/$(GNL_NAME) $(LIBFT_PATH)/$(LIBFT_NAME)

$(MLX_NAME):
			$(MAKE) -C $(MLX_PATH)

$(LIBFT_NAME):
			$(MAKE) -C $(LIBFT_PATH)

$(GNL_NAME):
			$(MAKE) -C $(GNL_PATH)

clean:
			$(MAKE) -C $(MLX_PATH) clean
			$(MAKE) -C $(LIBFT_PATH) clean
			$(MAKE) -C $(GNL_PATH) clean
			$(RM) $(GNL_PATH)/$(MLX_NAME) $(OBJS)
			$(RM) $(LIBFT_PATH)/$(LIBFT_NAME) $(OBJS)
			$(RM) $(GNL_PATH)/$(GNL_NAME) $(OBJS)
			$(RM) $(NAME) $(OBJS_CUB3D)

re:			fclean $(NAME)

f:			all clean

.PHONY:		all clean fclean re f



#gcc -Wall -Wextra -Werror -L mlx -I includes -lmlx -framework OpenGL -framework AppKit -lz -o cub3d libft.a 
#srcs/ft_parse_map.c srcs/ft_perror.c srcs/ft_parse_map_utils1.c srcs/ft_parse_map_utils2.c srcs/main_utils1.c srcs/main_utils2.c srcs/ft_init.c srcs/ft_init_utils1.c srcs/ft_init_utils2.c srcs/ft_screenshot.c srcs/bmp.c srcs/ft_render_3D.c srcs/ft_render_3D_utils1.c srcs/ft_render_3D_utils2.c srcs/ft_render_3D_utils3.c srcs/main.c


#gcc -Wall -Wextra -Werror                    -lmlx -framework OpenGL -framework AppKit -lz minilibx_mac/libmlx.a gnl/gnl.a libft/libft.a -o cub3d src/cub3d.o 
#src/cub3d_validations.o src/cub3d_read.o src/cub3d_validate_resolution.o src/cub3d_parse_resolution.o 
#ld: library not found for -lmlx