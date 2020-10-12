NAME= cub3d
UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Linux)
	VERSION_OS = linux
endif
ifeq ($(UNAME_S),Darwin)
	VERSION_OS = mac
endif

all	:$(NAME)

$(NAME):
		@$(MAKE) -C $(VERSION_OS)
		@cp $(VERSION_OS)/$(NAME) .


clean:
		$(RM) $(NAME)

f:		all clean

re	: clean all