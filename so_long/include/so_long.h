/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:46:16 by ade-rese          #+#    #+#             */
/*   Updated: 2024/04/19 14:52:18 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <fcntl.h>
# include <math.h>
# include "../minilibx-linux/mlx.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <X11/keysym.h>
# include <X11/X.h>

typedef struct s_struct
{
	void	*mlx;
	void	*img;
	void	*mlx_win;
	char	**map;
}	t_struct;

size_t	ft_strlen(char *str);
int		check_extantion(char **argv);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		check_error(int argc, char **argv);
char	*get_next_line(int fd);

#endif
