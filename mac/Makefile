#
#

SRCS		= src/main.c src/get_next_line.c src/get_next_line_utils.c

OBJS		= $(SRCS:.c=.o)

MLX_PATH	= minilibx

CFLAGS		= -Wall -Wextra -Werror

MAC_LIBS	= -lmlx -framework OpenGL -framework AppKit -lz

# -I/nfs/2020/e/epuclla/mine/42sv-cub3d/mac/minilibx main.c /nfs/2020/e/epuclla/mine/42sv-cub3d/mac/minilibx/libmlx.a -framework OpenGL -framework AppKit

MLX_NAME	= libmlx.a

NAME		= cub3d

all:		$(NAME)

$(NAME):	$(MLX_NAME) $(OBJS)
			gcc -L $(MLX_PATH) $(CFLAGS) $(MAC_LIBS) $(MLX_NAME) -o $(NAME) $(OBJS) -I ../

$(MLX_NAME):
			@$(MAKE) -C $(MLX_PATH)
			@cp $(MLX_PATH)/$(MLX_NAME) .

clean:
			@$(MAKE) -C $(MLX_PATH) clean
			$(RM) $(MLX_NAME) $(OBJS)

re:			fclean $(NAME)

f:			all clean

.PHONY:		all clean fclean re f

