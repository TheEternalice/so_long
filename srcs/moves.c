/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:15:44 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/14 13:55:54 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	pixel_diagonal_reset(t_struct *stru, int *i, int *j, char c)
{
	if (c == 'd')
		stru->game.yp += 8;
	if (c == 'u')
		stru->game.yp -= 8;
	if (c == 'r')
		stru->game.xp += 8;
	if (c == 'l')
		stru->game.xp -= 8;
	*i = stru->game.xp / 64;
	*j = stru->game.yp / 64;
}

static void	keys_helper1(t_struct *stru, int i, int j)
{
	if (stru->game.down && stru->map[j + 1][i] != '1')
	{
		if (stru->game.xp % 64 == 0)
			pixel_diagonal_reset(stru, &i, &j, 'd');
		else if (stru->map[j + 1][i + 1] != '1')
			pixel_diagonal_reset(stru, &i, &j, 'd');
	}
	if (stru->game.right && stru->map[j][i + 1] != '1')
	{
		if (stru->game.yp % 64 == 0)
			pixel_diagonal_reset(stru, &i, &j, 'r');
		else if (stru->map[j + 1][i + 1] != '1')
			pixel_diagonal_reset(stru, &i, &j, 'r');
	}
}

static void	keys_helper(t_struct *stru, int i, int j)
{
	if (stru->game.left && stru->map[j][i - 1] != '1'
		&& stru->game.xp % 64 == 0)
	{
		if (stru->game.yp % 64 == 0)
			pixel_diagonal_reset(stru, &i, &j, 'l');
		else if (stru->map[j + 1][i - 1] != '1')
			pixel_diagonal_reset(stru, &i, &j, 'l');
	}
	else if (stru->game.left && stru->map[j][i] != '1'
		&& stru->game.xp % 64 != 0)
	{
		if (stru->game.yp % 64 == 0)
			pixel_diagonal_reset(stru, &i, &j, 'l');
		else if (stru->map[j][i + 1] != '1')
			pixel_diagonal_reset(stru, &i, &j, 'l');
	}
	keys_helper1(stru, i, j);
}

void	keys(t_struct *stru)
{
	int	i;
	int	j;

	pixel_diagonal_reset(stru, &i, &j, 'n');
	if (stru->game.up && stru->map[j - 1][i] != '1' && stru->game.yp % 64 == 0)
	{
		if (stru->game.xp % 64 == 0)
			pixel_diagonal_reset(stru, &i, &j, 'u');
		else if (stru->map[j - 1][i + 1] != '1')
			pixel_diagonal_reset(stru, &i, &j, 'u');
	}
	else if (stru->game.up && stru->map[j][i] != '1' && stru->game.yp % 64 != 0)
	{
		if (stru->game.xp % 64 == 0)
			pixel_diagonal_reset(stru, &i, &j, 'u');
		else if (stru->map[j][i + 1] != '1')
			pixel_diagonal_reset(stru, &i, &j, 'u');
	}
	keys_helper(stru, i, j);
}
