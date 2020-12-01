# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/02 10:09:06 by epuclla           #+#    #+#              #
#    Updated: 2020/12/01 01:14:54 by epuclla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= src/main.c  src/ft_initialize_file_content.c src/ft_init_cub3d_game.c src/ft_parse_file_content.c \
				src/ft_general_error.c src/ft_figures.c

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
