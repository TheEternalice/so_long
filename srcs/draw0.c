/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:38:14 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 13:14:59 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	image_printer_helper1(t_struct *stru, int i, int j)
{
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] == '1'
		&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] != '1'
		&& stru->map[j][i - 1] != '1')))
		transparency(stru, stru->ru[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] != '1'
		&& stru->map[j - 1][i] == '1' && stru->map[j][i + 1] == '1'
		&& stru->map[j][i - 1] != '1')))
		transparency(stru, stru->dlc[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
	image_printer_helper2(stru, i, j);
}

static void	image_printer_helper0(t_struct *stru, int i, int j)
{
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] != '1'
		&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] != '1'
		&& stru->map[j][i - 1] == '1')))
		transparency(stru, stru->rc[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] != '1'
		&& stru->map[j - 1][i] == '1' && stru->map[j][i + 1] != '1'
		&& stru->map[j][i - 1] != '1')))
		transparency(stru, stru->u[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
	image_printer_helper1(stru, i, j);
}

void	image_printer_helper(t_struct *stru, int i, int j)
{
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] != '1'
		&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] != '1'
		&& stru->map[j][i - 1] != '1')))
		transparency(stru, stru->o[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] != '1'
		&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] == '1'
		&& stru->map[j][i - 1] != '1')))
		transparency(stru, stru->c[stru->frames % 8],
			CAM_LEN / 2 + (i * 64 - stru->game.xp),
			CAM_WIDHT / 2 + (j * 64 - stru->game.yp));
	image_printer_helper0(stru, i, j);
}

void	transparency(t_struct *stru, t_img *img, int x, int y)
{
	int				i;
	int				j;
	unsigned int	color;

	if (!img)
		return ;
	i = 0;
	while (i < img->width)
	{
		j = -1;
		while (++j < img->height)
		{
			if (j + y < 0 || j + y >= CAM_WIDHT
				|| i + x < 0 || i + x >= CAM_LEN)
				continue ;
			color = ((int *)img->data)[(j) * img->width + (i)];
			if (color == 0xFF000000)
				continue ;
			((int *)stru->canva->data)[(y + j) * stru->canva->width
				+ (x + i)] = color;
		}
		i++;
	}
}
