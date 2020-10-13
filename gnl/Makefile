# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/01 19:14:09 by epuclla           #+#    #+#              #
#    Updated: 2020/10/12 00:28:34 by epuclla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = gnl.a
CFLAGS = -Wall -Wextra -Werror -c

SOURCES	= get_next_line.c get_next_line_utils.c

OBJETS = $(SOURCES:%.c=%.o)
INCLUDES=./

all: $(NAME)
$(NAME):
	@$(CC) $(CFLAGS) $(SOURCES) -I$(INCLUDES)
	@ar rc $(NAME) $(OBJETS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJETS)

fclean: 	clean
	@rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re