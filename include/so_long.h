/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:46:16 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/24 14:50:01 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <fcntl.h>
# include <math.h>
# include "../minilibx-linux/mlx_int.h"
# include "../minilibx-linux/mlx.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <time.h>
# include <unistd.h>
# include <X11/keysym.h>
# include <X11/X.h>

typedef struct s_fill
{
	int		coin;
	int		exit;
	char	**map;
}	t_fill;

typedef struct s_game
{
	int					coin;
	int					exit;
	int					player;
	int					up;
	int					down;
	int					left;
	int					right;
	int					xp;
	int					yp;
	int					x;
	int					y;
	int					konami_code;
	unsigned long long	step;
}	t_game;

typedef struct s_struct
{
	void	*mlx;
	void	*mlx_win;
	char	**map;
	int		frames;
	int		cframes;
	clock_t	start;
	clock_t	end;
	t_img	*floor;
	t_img	*water[8];
	t_img	*player[4];
	t_img	*enemy[4];
	t_img	*exit[4];
	t_img	*coin[6];
	t_img	*gcoin[6];
	t_img	*step[10];
	t_img	*walk[4];
	t_img	*tborder[8];
	t_img	*bborder[8];
	t_img	*lborder[8];
	t_img	*rborder[8];
	t_img	*u[8];
	t_img	*ru[8];
	t_img	*c[8];
	t_img	*rc[8];
	t_img	*o[8];
	t_img	*dlc[8];
	t_img	*tlc[8];
	t_img	*drc[8];
	t_img	*trc[8];
	t_img	*canva;
	t_game	game;
	t_fill	flood;
}	t_struct;

size_t	ft_strlen(char *str);
char	*ft_strdup(char *s);
char	*get_next_line(int fd);
int		quit(t_struct *stru);
int		looped(t_struct *stru);
int		get_n_line(char *argv);
int		is_close(t_struct *stru);
int		sprites_e(t_struct *stru);
int		finishable(t_struct *stru);
int		sprites_c0(t_struct *stru);
int		check_args(t_struct *stru);
int		sprites_p0(t_struct *stru);
int		sprites_gc0(t_struct *stru);
int		sprites_pw0(t_struct *stru);
int		constructor(t_struct *stru);
int		sprites_init(t_struct *stru);
int		is_rectangle(t_struct *stru);
int		check_extantion(char **argv);
int		sprites_enemy0(t_struct *stru);
int		map_open(char *argv, t_struct *stru);
int		sprites_environment0(t_struct *stru);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		check_error(int argc, char **argv, t_struct *stru);
int		sprites_environment4(t_struct *stru, int wh, int he);
int		sprites_environment9(t_struct *stru, int wh, int he);
int		sprites_environment14(t_struct *stru, int wh, int he);
int		sprites_environment19(t_struct *stru, int wh, int he);
void	keys(t_struct *stru);
void	collision(t_struct *stru);
void	init_stru(t_struct *stru);
void	free_struct(t_struct *stru);
void	image_printer(t_struct *stru);
void	image_destroyer4(t_struct *stru);
void	easter_egg(int val, t_struct *stru);
void	coin_get(t_struct *stru, int i, int j);
void	enemy_move(t_struct *stru, int x, int y);
void	flood_fill(t_struct *stru, int x, int y);
void	itow(t_struct *stru, int nb, int x, int y);
void	exit_free(t_struct *stru, char *message, int num);
void	transparency(t_struct *stru, t_img *img, int x, int y);

#endif
