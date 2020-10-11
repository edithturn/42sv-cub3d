# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/02 10:09:06 by epuclla           #+#    #+#              #
#    Updated: 2020/10/11 03:38:21 by epuclla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= src/cub3d.c  src/cub3d_validations.c

SRC_GET_NEXT_LINE = gnl/get_next_line.c gnl/get_next_line_utils.c

OBJS_CUB3D		= $(SRCS:.c=.o)

OBJS_GET_NEXT_LINE		= $(SRC_GET_NEXT_LINE:.c=.o)

MLX_PATH		= minilibx

LIBFT_PATH = libft

CFLAGS		= -Wall -Wextra -Werror

LINUX_LIBS		= -lmlx -lXext -lX11 -lm -lbsd -L$(MLX_PATH)

MLX_NAME	= libmlx.a

LIBFT_NAME = libft.a

NAME		= cub3d

all:		$(NAME)

$(NAME):	$(MLX_NAME) $(OBJS_CUB3D) $(OBJS_GET_NEXT_LINE)
			gcc $(CFLAGS) -o $(NAME) $(OBJS_CUB3D)  $(OBJS_GET_NEXT_LINE) $(LINUX_LIBS) $(MLX_PATH)/$(MLX_NAME) $(LIBFT_PATH)/$(LIBFT_NAME)

$(MLX_NAME):
			@$(MAKE) -C $(MLX_PATH)

$(LIBFT_NAME):
			@$(MAKE) -C $(LIBFT_PATH)

clean:
			@$(MAKE) -C $(MLX_PATH) clean
			$(RM) $(MLX_NAME) $(OBJS)

re:			fclean $(NAME)

f:			all clean

.PHONY:		all clean fclean re f
