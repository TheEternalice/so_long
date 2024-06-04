/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:38:14 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/04 13:56:20 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	image_printer(t_struct *stru)
{
	int	i;
	int	j;

	j = 0;
	while (j < stru->game.y + 1)
	{
		i = 0;
		while (i < stru->game.x + 1)
		{
			if (stru->map[j][i] == '1')
				transparency(stru, stru->water[stru->frames % 8],
					i * 64, j * 64);
			if (stru->map[j][i + 1] && stru->map[j][i] == '1' && (stru->map[j][i + 1] == '0' || stru->map[j][i + 1] == 'C' || stru->map[j][i + 1] == 'P' || stru->map[j][i + 1] == 'E'))
				transparency(stru, stru->rborder[stru->frames % 8], i * 64, j * 64);
			if (i > 0 && stru->map[j][i] == '1' && stru->map[j][i - 1] == '0')
				transparency(stru, stru->lborder[stru->frames % 8], i * 64, j * 64);
			else if (stru->map[j][i] == '0' || stru->map[j][i] == 'C' || stru->map[j][i] == 'P' || stru->map[j][i] == 'E')
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
		transparency(stru, stru->player[stru->frames % 4], 0, 0);
		stru->frames++;
		if (stru->frames > 55)
			stru->frames = 0;
		mlx_put_image_to_window(stru->mlx, stru->mlx_win, stru->canva, 0, 0);
		stru->start = clock();
	}
	return (0);
}
