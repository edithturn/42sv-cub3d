# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/02 10:09:06 by epuclla           #+#    #+#              #
#    Updated: 2020/10/02 11:23:10 by epuclla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= src/main.c

OBJS		= $(SRCS:.c=.o)

MLX_PATH		= minilibx

CFLAGS		= -Wall -Wextra -Werror

LINUX_LIBS		= -lmlx -lXext -lX11 -lm -lbsd -L$(MLX_PATH)

MLX_NAME	= libmlx.a

NAME		= cub3d

all:		$(NAME)

$(NAME):	$(MLX_NAME) $(OBJS)
			gcc $(CFLAGS) -o $(NAME) $(OBJS) $(LINUX_LIBS) $(MLX_PATH)/$(MLX_NAME)

$(MLX_NAME):
			@$(MAKE) -C $(MLX_PATH)

clean:
			@$(MAKE) -C $(MLX_PATH) clean
			$(RM) $(MLX_NAME) $(OBJS)

re:			fclean $(NAME)

f:			all clean

.PHONY:		all clean fclean re f
