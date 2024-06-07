/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:38:14 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/07 14:40:35 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

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
			if (i > 0 && j > 0 && j < stru->game.y && i < stru->game.x
				&& stru->map[j][i] == '1' && ((stru->map[j + 1][i] == '1'
				&& stru->map[j - 1][i] != '1' && stru->map[j][i + 1] != '1'
				&& stru->map[j][i - 1] == '1')))
				transparency(stru, stru->trc[stru->frames % 8], i * 64, j * 64);
			else if (j < stru->game.y && stru->map[j][i] == '1' && stru->map[j + 1][i] != '1')
				transparency(stru, stru->tborder[stru->frames % 8], i * 64, j * 64);
			else if (stru->map[j][i + 1] && stru->map[j][i] == '1' && stru->map[j][i + 1] != '1' && stru->map[j][i + 1] != '\n' && stru->map[j + 1][i] == '1' && stru->map[j - 1][i] == '1')
				transparency(stru, stru->rborder[stru->frames % 8], i * 64, j * 64);
			if (i > 0 && stru->map[j][i] == '1' && stru->map[j][i - 1] != '1' && stru->map[j + 1][i] == '1' && stru->map[j - 1][i] == '1')
				transparency(stru, stru->lborder[stru->frames % 8], i * 64, j * 64);
			if (j > 0 && stru->map[j][i] == '1' && stru->map[j - 1][i] != '1' && stru->map[j][i - 1] == '1' && stru->map[j][i + 1] == '1')
				transparency(stru, stru->bborder[stru->frames % 8], i * 64, j * 64);
			else if (stru->map[j][i] != '1')
				transparency(stru, stru->floor, i * 64, j * 64);
			i++;
		}
		j++;
	}
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

int	looped(t_struct *stru)
{
	unsigned long	millis;

	stru->end = clock();
	millis = (stru->end - stru->start) * 1000 / CLOCKS_PER_SEC;
	if (millis >= 55)
	{
		image_printer(stru);
		transparency(stru, stru->player[stru->frames % 4],
			stru->game.xp, stru->game.yp);
		stru->frames++;
		if (stru->frames > 55)
			stru->frames = 0;
		mlx_put_image_to_window(stru->mlx, stru->mlx_win, stru->canva, 0, 0);
		stru->start = clock();
	}
	return (0);
}
