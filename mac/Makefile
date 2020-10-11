SRCS		= src/main.c

SRC_GET_NEXT_LINE = ../gnl/get_next_line/get_next_line.c ../gnl/get_next_line/get_next_line_utils.c

OBJS_CUB3D		= $(SRCS:.c=.o)

OBJS_GET_NEXT_LINE		= $(SRC_GET_NEXT_LINE:.c=.o)

MLX_PATH	= minilibx

CFLAGS		= -Wall -Wextra -Werror

MAC_LIBS	= -lmlx -framework OpenGL -framework AppKit -lz

MLX_NAME	= libmlx.a

LIBFT_NAME	= libft.a

NAME		= cub3d

all:		$(NAME)

$(NAME):	$(MLX_NAME) $(LIBFT_NAME) $(OBJS_CUB3D) $(OBJS_GET_NEXT_LINE)
			gcc -L $(MLX_PATH) $(CFLAGS) $(MAC_LIBS) $(MLX_NAME) $(LIBFT_NAME) -o $(NAME) $(OBJS_CUB3D) $(OBJS_GET_NEXT_LINE) -I ../

$(MLX_NAME):
			@$(MAKE) -C $(MLX_PATH)
			@cp $(MLX_PATH)/$(MLX_NAME) .

clean:
			@$(MAKE) -C $(MLX_PATH) clean
			$(RM) $(MLX_NAME) $(OBJS_CUB3D) $(OBJS_GET_NEXT_LINE)

re:			fclean $(NAME)

f:			all clean

.PHONY:		all clean fclean re f

