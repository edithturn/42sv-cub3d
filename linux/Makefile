# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/02 10:09:06 by epuclla           #+#    #+#              #
#    Updated: 2020/10/12 12:40:08 by epuclla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= src/cub3d.c  src/cub3d_validations.c src/cub3d_read.c

OBJS_CUB3D		= $(SRCS:.c=.o)

MLX_PATH		= minilibx

LIBFT_PATH = libft

GNL_PATH = gnl

CFLAGS		= -Wall -Wextra -Werror

LINUX_LIBS		= -lmlx -lXext -lX11 -lm -lbsd -L$(MLX_PATH)

#MAC_LIBS	= -lmlx -framework OpenGL -framework AppKit -lz

MLX_NAME	= libmlx.a

LIBFT_NAME = libft.a

GNL_NAME = gnl.a

NAME		= cub3d

all:		$(NAME)

$(NAME):	$(MLX_NAME)  $(LIBFT_NAME) $(GNL_NAME) $(OBJS_CUB3D)
			clang $(CFLAGS) -o $(NAME) $(OBJS_CUB3D) $(LINUX_LIBS) $(MLX_PATH)/$(MLX_NAME) $(GNL_PATH)/$(GNL_NAME) $(LIBFT_PATH)/$(LIBFT_NAME)

$(MLX_NAME):
			@$(MAKE) -C $(MLX_PATH)

$(LIBFT_NAME):
			cd $(LIBFT_PATH) && @$(MAKE) -C $(LIBFT_PATH)

$(GNL_NAME):
			@$(MAKE) -C $(GNL_PATH)

clean:
			@$(MAKE) -C $(MLX_PATH) clean
			$(RM) $(MLX_NAME) $(OBJS)

re:			fclean $(NAME)

f:			all clean

.PHONY:		all clean fclean re f
