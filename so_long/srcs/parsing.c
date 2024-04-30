/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:48:13 by ade-rese          #+#    #+#             */
/*   Updated: 2024/04/29 10:21:39 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	check_extantion(char **argv)
{
	int	i;

	i = ft_strlen(argv[1]) - 4;
	if (!ft_strncmp(&argv[1][i], ".ber", 4))
		return (0);
	return (1);
}

static int	liner(char *line, int fd)
{
	int	i;

	i = 0;
	while (line)
	{
		free(line);
		i++;
		line = get_next_line(fd);
	}
	return (i);
}

int	get_n_line(char *argv)
{
	int		fd;
	int		res;
	int		fdd;
	char	*line;

	fdd = open(argv, __O_DIRECTORY);
	if (fdd != -1)
	{
		close(fdd);
		return (0);
	}
	fd = open(argv, O_RDONLY);
	if (!fd)
	{
		close(fd);
		return (0);
	}
	line = get_next_line(fd);
	res = liner(line, fd);
	close(fd);
	return (res);
}

int	map_open(char *argv, t_struct *stru)
{
	int			fd;
	int			i;
	char		*line;

	i = 0;
	fd = open(argv, O_RDONLY);
	if (!fd)
		return (1);
	stru->map = malloc(sizeof(char *) * (get_n_line(argv) + 1));
	if (!stru->map)
		return (1);
	line = get_next_line(fd);
	if (!line)
	{
		close(fd);
		return (1);
	}
	while (line)
	{
		stru->map[i] = line;
		i++;
		line = get_next_line(fd);
	}
	stru->map[i] = NULL;
	close(fd);
	return (0);
}
