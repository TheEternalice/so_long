/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:50:45 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/08 12:34:40 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	is_validarg(char c, t_struct *stru, int i, int j)
{
	if (c == 'P')
	{
		stru->game.player++;
		stru->game.xp = i * 64;
		stru->game.yp = j * 64;
	}
	else if (c == 'E')
		stru->game.exit++;
	else if (c == 'C')
		stru->game.coin++;
	else if (c == 'S')
		stru->sentinel.nb_sent++;
	return (c == '0' || c == '1' || c == 'P' || c == 'C' || c == 'E'
		|| c == 'S');
}

int	check_args(t_struct *stru)
{
	int	i;
	int	j;

	i = 0;
	while (stru->map[i])
	{
		j = 0;
		while (stru->map[i][j] && stru->map[i][j] != '\n')
		{
			if (!is_validarg(stru->map[i][j], stru, j, i))
				return (1);
			j++;
		}
		i++;
	}
	if (stru->game.player != 1 || stru->game.exit != 1)
		return (1);
	stru->sentinel.x = malloc(sizeof(int) * stru->sentinel.nb_sent);
	stru->sentinel.y = malloc(sizeof(int) * stru->sentinel.nb_sent);
	if (!stru->sentinel.x || !stru->sentinel.y)
		exit_free(stru, "Error\nfail to allocate sentinel coordonate", 1);
	return (0);
}

int	check_error(int argc, char **argv, t_struct *stru)
{
	if (argc != 2)
		return (write(2, "Error\nInvalide number of arguments\n", 35), 1);
	else if (check_extantion(argv))
		return (write(2, "Error\nInvalide file name\n", 25), 1);
	else if (map_open(argv[1], stru))
		return (write(2, "Error\nDir found or no map\n", 26), 1);
	else if (is_rectangle(stru))
		exit_free(stru, "Error\nInvalide map\n", 1);
	else if (check_args(stru))
		exit_free(stru, "Error\nInvalide map arg\n", 1);
	else if (is_close(stru))
		exit_free(stru, "Error\nInvalide map\n", 1);
	else if (finishable(stru))
		exit_free(stru, "Error\nNo path found to finish\n", 1);
	return (0);
}

int	is_rectangle(t_struct *stru)
{
	int	i;
	int	leni;
	int	lenj;

	i = 0;
	leni = ft_strlen(stru->map[i]);
	if (stru->map[i][leni] == '\n')
		leni--;
	while (stru->map[i] && stru->map[i][0] != '\n')
	{
		lenj = ft_strlen(stru->map[i]);
		if (stru->map[i][lenj] == '\n')
			lenj--;
		if (leni != lenj)
			return (1);
		i++;
	}
	while (stru->map[i] && stru->map[i][0] == '\n')
		i++;
	if (stru->map[i] || i < 2)
		return (1);
	return (0);
}

int	is_close(t_struct *stru)
{
	int	i;
	int	j;
	int	max;

	i = 1;
	j = 0;
	max = 0;
	while (stru->map[max + 1])
		max++;
	while (stru->map[0][j + 1] && stru->map[0][j + 1] != '\n')
	{
		if (stru->map[0][j] != '1' || stru->map[max][j] != '1')
			return (1);
		j++;
	}
	while (stru->map[i] && i < max)
	{
		if (stru->map[i][0] != '1' || stru->map[i][j] != '1')
			return (1);
		i++;
	}
	stru->game.x = j;
	stru->game.y = max;
	return (0);
}
