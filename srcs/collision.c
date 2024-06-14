/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:17:53 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/14 15:12:53 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	coin_get(t_struct *stru, int i, int j)
{
	if (stru->map[j][i] == '+')
	{
		transparency(stru, stru->gcoin[stru->cframes], i * 64, (j - 1) * 64);
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
