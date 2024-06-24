SRCS		=	./srcs/main.c ./srcs/error.c ./srcs/parsing.c ./srcs/libft_utils.c ./srcs/gnl.c ./srcs/list.c \
				./srcs/constructor.c ./srcs/destructor0.c ./srcs/destructor1.c ./srcs/moves.c ./srcs/draw.c ./srcs/sprites0.c \
				./srcs/sprites1.c ./srcs/sprites2.c ./srcs/sprites3.c ./srcs/sprites4.c ./srcs/sprites5.c ./srcs/sprites6.c ./srcs/sprites7.c \
				./srcs/collision.c ./srcs/easter_egg.c ./srcs/steps_drawer.c ./srcs/flood_fill.c

OBJS		=	$(SRCS:.c=.o)

OBJS_BONUS	=	$(BONUS:.c=.o)

CC			=	cc

CFLAGS		=	-Wall -Wextra -Werror -g3

RM			=	rm -f

MINILIBX	=	make -C ./minilibx-linux/

MLXFLAGS	=	-Lmlx_linux -L/usr/lib -lXext -lX11 -lm -lz

MLX_EX		=	./minilibx-linux/libmlx.a

MLX_PATH	=	./minilibx-linux/

NAME		=	so_long

all: $(NAME)

$(NAME): $(OBJS)
		$(MINILIBX)
		$(CC) $(OBJS) $(MLX_EX) $(MLXFLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS) 
		make clean -sC $(MLX_PATH)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
