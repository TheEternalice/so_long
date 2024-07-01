/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:14:37 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 13:15:11 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	image_printer_helper3(t_struct *stru, int i, int j)
{
	if (i > 0 && stru->map[j][i] == '1' && stru->map[j][i - 1] != '1'
		&& stru->map[j + 1][i] == '1' && stru->map[j - 1][i] == '1')
		transparency(stru, stru->lborder[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
	if (j > 0 && stru->map[j][i] == '1' && stru->map[j - 1][i] != '1'
		&& stru->map[j][i - 1] == '1' && stru->map[j][i + 1] == '1')
		transparency(stru, stru->bborder[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] == '1'
		&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] == '1'
		&& stru->map[j][i - 1] != '1')))
		transparency(stru, stru->tlc[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] != '1'
		&& stru->map[j - 1][i] == '1' && stru->map[j][i + 1] != '1'
		&& stru->map[j][i - 1] == '1')))
		transparency(stru, stru->drc[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
}

void	image_printer_helper2(t_struct *stru, int i, int j)
{
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] == '1'
		&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] != '1'
		&& stru->map[j][i - 1] == '1')))
		transparency(stru, stru->trc[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
	else if (j < stru->game.y && stru->map[j][i] == '1'
		&& stru->map[j + 1][i] != '1')
		transparency(stru, stru->tborder[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
	else if (stru->map[j][i + 1] && stru->map[j][i] == '1'
		&& stru->map[j][i + 1] != '1' && stru->map[j][i + 1] != '\n'
		&& stru->map[j + 1][i] == '1' && stru->map[j - 1][i] == '1')
		transparency(stru, stru->rborder[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
	image_printer_helper3(stru, i, j);
}
