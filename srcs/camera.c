/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:49:15 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 13:21:21 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	camera_track_helper1(t_struct *stru, int i, int j)
{
	image_printer_helper(stru, j, i);
	if (stru->map[i][j] != '1')
		transparency(stru, stru->floor, CAM_LEN / 2 + (j * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (i * 64 - stru->game.yp));
	if (stru->map[i][j] == 'C')
		transparency(stru, stru->coin[stru->frames % 6],
			CAM_LEN / 2 + (j * 64 + 8 - stru->game.xp),
			CAM_WIDHT / 2 + (i * 64 + 8 - stru->game.yp));
	if (stru->map[i][j] == 'E')
		transparency(stru, stru->exit[stru->frames % 4],
			CAM_LEN / 2 + (j * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (i * 64 - stru->game.yp));
	if (stru->map[i][j] == 'S' && stru->game.konami_code == 0)
		transparency(stru, stru->enemy[stru->frames % 4],
			CAM_LEN / 2 + (j * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (i * 64 - stru->game.yp));
	if (stru->map[i][j] == 'S' && stru->game.konami_code == 1)
		transparency(stru, stru->waka[(stru->frames) % 55],
			CAM_LEN / 2 + (j * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (i * 64 - stru->game.yp));
	coin_get(stru, j, i);
	itow(stru, stru->game.step, 0, 0);
}

static void	camera_track_helper0(t_struct *stru, int i, int j)
{
	while (i < stru->game.y + 1 && i <= (stru->game.yp + CAM_WIDHT / 2) / 64)
	{
		if (stru->game.xp > CAM_LEN / 2)
			j = (stru->game.xp - CAM_LEN / 2) / 64;
		else
		j = 0;
		while (j < stru->game.x + 1
			&& j < (stru->game.xp + CAM_LEN / 2) / 64 + 1)
		{
			camera_track_helper1(stru, i, j);
			j++;
		}
		i++;
	}
}

void	camera_track(t_struct *stru)
{
	int	i;
	int	j;

	i = 0;
	while (i <= CAM_WIDHT / 64)
	{
		j = 0;
		while (j < CAM_LEN / 64)
		{
			transparency(stru, stru->water[stru->frames % 8], j * 64, i * 64);
			j++;
		}
		i++;
	}
	if (stru->game.yp > CAM_WIDHT / 2)
		i = (stru->game.yp - CAM_WIDHT / 2) / 64;
	else
		i = 0;
	camera_track_helper0(stru, i, j);
}
