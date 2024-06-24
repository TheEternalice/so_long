/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:42:11 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/24 13:12:32 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	flood_fill(t_struct *stru, int x, int y)
{
	if (stru->flood.map[y][x] == 'C')
			stru->flood.coin++;
	if (stru->flood.map[y][x] == 'E')
			stru->flood.exit++;
	stru->flood.map[y][x] = 'F';
	if (stru->flood.map[y][x + 1] != '1' && stru->flood.map[y][x + 1] != 'F')
		flood_fill(stru, x + 1, y);
	if (stru->flood.map[y][x - 1] != '1' && stru->flood.map[y][x - 1] != 'F')
		flood_fill(stru, x - 1, y);
	if (stru->flood.map[y + 1][x] != '1' && stru->flood.map[y + 1][x] != 'F')
		flood_fill(stru, x, y + 1);
	if (stru->flood.map[y - 1][x] != '1' && stru->flood.map[y - 1][x] != 'F')
		flood_fill(stru, x, y - 1);
}

int	finishable(t_struct *stru)
{
	flood_fill(stru, stru->game.xp / 64, stru->game.yp / 64);
	if (stru->game.coin == stru->flood.coin)
		if (stru->game.exit == stru->flood.exit)
			return (0);
	return (1);
}
