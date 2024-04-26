/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:50:45 by ade-rese          #+#    #+#             */
/*   Updated: 2024/04/26 15:46:18 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	is_validarg(char c, t_struct *stru)
{
	if (c == 'P')
		stru->game->player++;
	else if (c == 'E')
		stru->game->exit++;
	else if (c == 'C')
		stru->game->coin++;
	return (c == '0' || c == '1' || c == 'P' || c == 'C' || c == 'E');
}

int	check_args(t_struct *stru)
{
	int	i;
	int	j;

	init_stru(stru);
	i = 0;
	while (stru->map[i])
	{
		j = 0;
		while (stru->map[i][j])
		{
			if (!is_validarg(stru->map[i][j], stru))
				return (1);
			j++;
		}
		i++;
	}
	if (stru->game->player != 1 || stru->game->exit != 1)
		return (1);
	return (0);
}

int	check_error(int argc, char **argv)
{
	if (argc != 2)
		return (write(2, "Invalide number of arguments\n", 29), 1);
	else if (check_extantion(argv))
		return (write(2, "Invalide file name\n", 19), 1);
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

// void	flood_fill()
// {
// }
