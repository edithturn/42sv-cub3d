# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/02 10:09:06 by epuclla           #+#    #+#              #
#    Updated: 2020/12/12 01:40:24 by epuclla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= src/main.c src/ft_init_game.c src/ft_initialize_map_content.c src/ft_parse_map_is_element.c \
					src/ft_parse_map_content.c src/ft_parse_map_by_elements.c \
					src/ft_allocate_map_maze.c  src/ft_populate_maze_grid.c \
					src/ft_validations.c 

OBJS_CUB3D		= $(SRCS:.c=.o)

MLX_PATH		= minilibx_mac

LIBFT_PATH = libft

GNL_PATH = gnl

CFLAGS		= -Wall -Wextra -Werror #-fsanitize=address

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
			clang -g3 $(CFLAGS) -o $(NAME) $(OBJS_CUB3D)  $(SO_LIBS) $(MLX_PATH)/$(MLX_NAME) $(GNL_PATH)/$(GNL_NAME) $(LIBFT_PATH)/$(LIBFT_NAME)

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
