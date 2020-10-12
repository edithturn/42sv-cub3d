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

MAC_LIBS	= -lmlx -framework OpenGL -framework AppKit -lz

MLX_NAME	= libmlx.a

LIBFT_NAME = libft.a

GNL_NAME = gnl.a

NAME		= cub3d

all:		$(NAME)

$(NAME):	$(MLX_NAME)  $(LIBFT_NAME) $(GNL_NAME) $(OBJS_CUB3D)
			gcc $(CFLAGS) -o $(NAME) $(OBJS_CUB3D) $(LINUX_LIBS) $(MLX_PATH)/$(MLX_NAME) $(GNL_PATH)/$(GNL_NAME) $(LIBFT_PATH)/$(LIBFT_NAME)

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
