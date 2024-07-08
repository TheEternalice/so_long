SRCS		=	./srcs/main.c ./srcs/error.c ./srcs/parsing.c ./srcs/libft_utils0.c ./srcs/libft_utils1.c ./srcs/gnl.c ./srcs/list0.c ./srcs/list1.c ./srcs/list2.c \
				./srcs/constructor.c ./srcs/destructor0.c ./srcs/destructor1.c ./srcs/destructor2.c ./srcs/destructor3.c \
				./srcs/sprites0.c ./srcs/sprites1.c ./srcs/sprites2.c ./srcs/sprites3.c ./srcs/sprites4.c ./srcs/sprites5.c ./srcs/sprites6.c \
				./srcs/sprites7.c ./srcs/sprites8.c ./srcs/sprites9.c ./srcs/sprites10.c ./srcs/sprites11.c ./srcs/sprites12.c ./srcs/sprites13.c \
				./srcs/sprites14.c ./srcs/enemy.c ./srcs/moves.c ./srcs/draw0.c ./srcs/draw1.c ./srcs/camera.c ./srcs/character_selection.c \
				./srcs/selection_portrait.c ./srcs/steps_drawer.c ./srcs/flood_fill.c ./srcs/collision.c ./srcs/easter_egg.c ./srcs/keys.c

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

all: clone $(NAME)

bonus: all

$(NAME): $(OBJS)
		$(MINILIBX)
		$(CC) $(OBJS) $(MLX_EX) $(MLXFLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS)
		@if [ -d "$(MLX_PATH)" ]; then \
            make clean -sC $(MLX_PATH); \
        fi

fclean: clean
		$(RM) $(NAME)
		@if [ -d "$(MLX_PATH)" ]; then \
			rm -rf $(MLX_PATH); \
		fi

re: fclean all

clone:
		curl -o ./minilibx-linux.tgz https://cdn.intra.42.fr/document/document/21439/minilibx-linux.tgz
		tar -xzf ./minilibx-linux.tgz -C ./
		rm ./minilibx-linux.tgz

.PHONY: all clean fclean re bonus clone
