/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:17:53 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 11:29:44 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	exit_collision(t_struct *stru, int i, int j)
{
	if (stru->map[j][i] == 'E' && stru->game.coin == 0)
	{
		write(1, "(∩ ͡° ͜ʖ ͡°)⊃━☆ﾟ. * Congratulation!!!!\n", 55);
		quit(stru);
	}
	else if (stru->map[j + 1][i] == 'E' && stru->game.yp % 64 != 0
		&& stru->game.coin == 0)
	{
		write(1, "(∩ ͡° ͜ʖ ͡°)⊃━☆ﾟ. * Congratulation!!!!\n", 55);
		quit(stru);
	}
	else if (stru->map[j][i + 1] == 'E' && stru->game.xp % 64 != 0
		&& stru->game.coin == 0)
	{
		write(1, "(∩ ͡° ͜ʖ ͡°)⊃━☆ﾟ. * Congratulation!!!!\n", 55);
		quit(stru);
	}
	else if (stru->map[j + 1][i + 1] == 'E' && stru->game.xp % 64 != 0
		&& stru->game.yp % 64 != 0 && stru->game.coin == 0)
	{
		write(1, "(∩ ͡° ͜ʖ ͡°)⊃━☆ﾟ. * Congratulation!!!!\n", 55);
		quit(stru);
	}
}

void	coin_get(t_struct *stru, int i, int j)
{
	if (stru->map[j][i] == '+')
	{
		transparency(stru, stru->gcoin[stru->cframes],
			CAM_LEN / 2 + (i * 64 + 8 - stru->game.xp),
			CAM_WIDHT / 2 + ((j - 1) * 64 + 8 - stru->game.yp));
		stru->cframes++;
		if (stru->cframes == 6)
		{
			stru->map[j][i] = '0';
			stru->cframes = 0;
		}
	}
}

static void	collision_helper(t_struct *stru, int i, int j)
{
	if (stru->map[j + 1][i + 1] == 'C' && stru->game.xp % 64 != 0
		&& stru->game.yp % 64 != 0)
	{
		stru->game.coin--;
		stru->map[j + 1][i + 1] = '+';
	}
}

void	collision(t_struct *stru)
{
	int	i;
	int	j;

	i = stru->game.xp / 64;
	j = stru->game.yp / 64;
	exit_collision(stru, i, j);
	if (stru->map[j][i] == 'C')
	{
		stru->game.coin--;
		stru->map[j][i] = '+';
	}
	else if (stru->map[j + 1][i] == 'C' && stru->game.yp % 64 != 0)
	{
		stru->game.coin--;
		stru->map[j + 1][i] = '+';
	}
	else if (stru->map[j][i + 1] == 'C' && stru->game.xp % 64 != 0)
	{
		stru->game.coin--;
		stru->map[j][i + 1] = '+';
	}
	collision_helper(stru, i, j);
}
