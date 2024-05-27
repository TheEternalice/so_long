/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:46:16 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/27 15:43:59 by ade-rese         ###   ########.fr       */
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

typedef struct s_game
{
	int	coin;
	int	exit;
	int	player;
	int	x;
	int	y;
	int	konami_code;
}	t_game;

typedef struct s_struct
{
	void	*mlx;
	void	*floor;
	void	*mlx_win;
	char	**map;
	int		frames;
	clock_t	start;
	clock_t	end;
	t_img	*player[4];
	t_img	*water[8];
	t_img	*canva;
	t_game	game;
}	t_struct;

size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
int		quit(t_struct *stru);
int		looped(t_struct *stru);
int		get_n_line(char *argv);
int		is_close(t_struct *stru);
int		check_args(t_struct *stru);
int		constructor(t_struct *stru);
int		is_rectangle(t_struct *stru);
int		check_extantion(char **argv);
int		keys(int val, t_struct *stru);
int		map_open(char *argv, t_struct *stru);
int		sprites0(t_struct *stru);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		check_error(int argc, char **argv, t_struct *stru);
void	init_stru(t_struct *stru);
void	free_struct(t_struct *stru);
void	image_printer(t_struct *stru);
void	easter_egg(int val, t_struct *stru);
void	exit_free(t_struct *stru, char *message, int num);
void	draw_sprite(t_struct *stru, t_img *img, int x, int y);

#endif
