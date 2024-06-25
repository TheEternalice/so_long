/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:31:15 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/25 13:15:26 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	collision_helper(t_struct *stru, int i, int j)
{
	if (stru->map[j][i + 1] == 'S' && stru->game.xp % 64 != 0)
	{
		write(1, "(╯°□°）╯︵ ┻━┻ Bad ending (╯°□°）╯︵ ┻━┻\n", 73);
		quit(stru);
	}
	else if (stru->map[j + 1][i + 1] == 'S' && stru->game.xp % 64 != 0
		&& stru->game.yp % 64 != 0)
	{
		write(1, "(╯°□°）╯︵ ┻━┻ Bad ending (╯°□°）╯︵ ┻━┻\n", 73);
		quit(stru);
	}
}

void	collision_enemy(t_struct *stru)
{
	int	i;
	int	j;

	i = stru->game.xp / 64;
	j = stru->game.yp / 64;
	if (stru->map[j][i] == 'S')
	{
		write(1, "(╯°□°）╯︵ ┻━┻ Bad ending (╯°□°）╯︵ ┻━┻\n", 73);
		quit(stru);
	}
	else if (stru->map[j + 1][i] == 'S' && stru->game.yp % 64 != 0)
	{
		write(1, "(╯°□°）╯︵ ┻━┻ Bad ending (╯°□°）╯︵ ┻━┻\n", 73);
		quit(stru);
	}
	collision_helper(stru, i, j);
}

void	coordonate(t_struct *stru)
{
	int	i;
	int	j;
	int	s;

	s = 1;
	j = 0;
	while (j < stru->game.y + 1)
	{
		i = 0;
		while (i < stru->game.x + 1)
		{
			if (stru->map[j][i] == 'S')
			{
				stru->sentinel.x[s - 1] = i;
				stru->sentinel.y[s - 1] = j;
				s++;
			}
			i++;
		}
		j++;
	}
	while (--s)
		enemy_move(stru, stru->sentinel.x[s - 1], stru->sentinel.y[s - 1]);
}

static void	enemy_move_helper(t_struct *stru, int x, int y, int mv)
{
	if (mv == 2 && (stru->map[y + 1][x] == '0' || stru->map[y + 1][x] == 'P'))
	{
		stru->map[y][x] = '0';
		stru->map[y + 1][x] = 'S';
	}
	else if (mv == 3 && (stru->map[y][x - 1] == '0'
		|| stru->map[y][x - 1] == 'P'))
	{
		stru->map[y][x] = '0';
		stru->map[y][x - 1] = 'S';
	}
}

void	enemy_move(t_struct *stru, int x, int y)
{
	int	mv;

	mv = rand() % 4;
	if (mv == 0 && (stru->map[y][x + 1] == '0' || stru->map[y][x + 1] == 'P'))
	{
		stru->map[y][x] = '0';
		stru->map[y][x + 1] = 'S';
	}
	else if (mv == 1 && (stru->map[y - 1][x] == '0'
		|| stru->map[y - 1][x] == 'P'))
	{
		stru->map[y][x] = '0';
		stru->map[y - 1][x] = 'S';
	}
	enemy_move_helper(stru, x, y, mv);
}
