/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:38:14 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/23 13:41:43 by ade-rese         ###   ########.fr       */
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
			draw_sprite(stru, stru->floor, i * 64, j * 64);
			i++;
		}
		j++;
	}
}

void	draw_sprite(t_struct *stru, t_img *img, int x, int y)
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
			color = ((int *)img->data)[(int)(j) *img->width + (int)(i)];
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
	image_printer(stru);
	draw_sprite(stru, stru->player[stru->frames % 4], 0, 0);
	stru->frames++;
	mlx_put_image_to_window(stru->mlx, stru->mlx_win, stru->canva, 0, 0);
	return (0);
}
