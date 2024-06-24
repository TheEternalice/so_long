/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:38:14 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/24 15:20:08 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	image_printer_helper2(t_struct *stru, int i, int j)
{
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] == '1'
		&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] != '1'
		&& stru->map[j][i - 1] == '1')))
		transparency(stru, stru->trc[stru->frames % 8], i * 64, j * 64);
	else if (j < stru->game.y && stru->map[j][i] == '1'
		&& stru->map[j + 1][i] != '1')
		transparency(stru, stru->tborder[stru->frames % 8], i * 64, j * 64);
	else if (stru->map[j][i + 1] && stru->map[j][i] == '1'
		&& stru->map[j][i + 1] != '1' && stru->map[j][i + 1] != '\n'
		&& stru->map[j + 1][i] == '1' && stru->map[j - 1][i] == '1')
		transparency(stru, stru->rborder[stru->frames % 8], i * 64, j * 64);
	if (i > 0 && stru->map[j][i] == '1' && stru->map[j][i - 1] != '1'
		&& stru->map[j + 1][i] == '1' && stru->map[j - 1][i] == '1')
		transparency(stru, stru->lborder[stru->frames % 8], i * 64, j * 64);
	if (j > 0 && stru->map[j][i] == '1' && stru->map[j - 1][i] != '1'
		&& stru->map[j][i - 1] == '1' && stru->map[j][i + 1] == '1')
		transparency(stru, stru->bborder[stru->frames % 8],
			i * 64, j * 64);
	else if (stru->map[j][i] != '1')
		transparency(stru, stru->floor, i * 64, j * 64);
}

static void	image_printer_helper1(t_struct *stru, int i, int j)
{
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] == '1'
		&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] != '1'
		&& stru->map[j][i - 1] != '1')))
		transparency(stru, stru->ru[stru->frames % 8], i * 64, j * 64);
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] != '1'
		&& stru->map[j - 1][i] == '1' && stru->map[j][i + 1] == '1'
		&& stru->map[j][i - 1] != '1')))
		transparency(stru, stru->dlc[stru->frames % 8], i * 64, j * 64);
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] == '1'
		&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] == '1'
		&& stru->map[j][i - 1] != '1')))
		transparency(stru, stru->tlc[stru->frames % 8], i * 64, j * 64);
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] != '1'
		&& stru->map[j - 1][i] == '1' && stru->map[j][i + 1] != '1'
		&& stru->map[j][i - 1] == '1')))
		transparency(stru, stru->drc[stru->frames % 8], i * 64, j * 64);
}

static void	image_printer_helper(t_struct *stru, int i, int j)
{
	if (stru->map[j][i] == '1')
		transparency(stru, stru->water[stru->frames % 8],
			i * 64, j * 64);
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] != '1'
		&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] != '1'
		&& stru->map[j][i - 1] != '1')))
		transparency(stru, stru->o[stru->frames % 8], i * 64, j * 64);
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] != '1'
		&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] == '1'
		&& stru->map[j][i - 1] != '1')))
		transparency(stru, stru->c[stru->frames % 8], i * 64, j * 64);
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] != '1'
		&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] != '1'
		&& stru->map[j][i - 1] == '1')))
		transparency(stru, stru->rc[stru->frames % 8], i * 64, j * 64);
	if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
		&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] != '1'
		&& stru->map[j - 1][i] == '1' && stru->map[j][i + 1] != '1'
		&& stru->map[j][i - 1] != '1')))
		transparency(stru, stru->u[stru->frames % 8], i * 64, j * 64);
	image_printer_helper1(stru, i, j);
}

void	image_printer(t_struct *stru)
{
	int		i;
	int		j;

	j = 0;
	while (j < stru->game.y + 1)
	{
		i = 0;
		while (i < stru->game.x + 1)
		{
			image_printer_helper(stru, i, j);
			image_printer_helper2(stru, i, j);
			coin_get(stru, i, j);
			if (stru->map[j][i] == 'C')
				transparency(stru, stru->coin[stru->frames % 6],
					i * 64 + 8, j * 64 + 8);
			if (stru->map[j][i] == 'E')
				transparency(stru, stru->exit[stru->frames % 4],
					i * 64, j * 64);
			if (stru->map[j][i] == 'S')
				transparency(stru, stru->enemy[stru->frames % 4],
					i * 64, j * 64);
			i++;
		}
		j++;
	}
	itow(stru, stru->game.step, 0, 0);
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
			if (j + y < 0 || j + y >= (stru->game.y + 1) * 64
				|| i + x < 0 || i + x >= (stru->game.x + 1) * 64)
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
