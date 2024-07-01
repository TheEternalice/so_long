/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_selection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:26:36 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 15:39:57 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	init_arrow(t_struct *stru)
{
	int	size;

	stru->arrow[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/arrow0.xpm", &size, &size);
	if (!stru->arrow[0])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->arrow[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/arrow1.xpm", &size, &size);
	if (!stru->arrow[1])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->arrow[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/arrow2.xpm", &size, &size);
	if (!stru->arrow[2])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->arrow[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/arrow3.xpm", &size, &size);
	if (!stru->arrow[3])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->arrow[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/arrow4.xpm", &size, &size);
	if (!stru->arrow[4])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	return (0);
}

int	selection(t_struct *stru)
{
	int	i;

	i = 0;
	transparency(stru, stru->select[0], 250 + (1920 / 4) * 0 - 128, 200 + (1150 / 4) * 0 - 128);
	transparency(stru, stru->select[1], 250 + (1920 / 4) * 1 - 128, 200 + (1150 / 4) * 0 - 128);
	transparency(stru, stru->select[2], 250 + (1920 / 4) * 2 - 128, 200 + (1150 / 4) * 0 - 128);
	transparency(stru, stru->select[3], 250 + (1920 / 4) * 3 - 128, 200 + (1150 / 4) * 0 - 128);
	transparency(stru, stru->select[4], 250 + (1920 / 4) * 0 - 128, 200 + (1150 / 4) * 1 - 128);
	transparency(stru, stru->select[5], 250 + (1920 / 4) * 1 - 128, 200 + (1150 / 4) * 1 - 128);
	transparency(stru, stru->select[6], 250 + (1920 / 4) * 2 - 128, 200 + (1150 / 4) * 1 - 128);
	transparency(stru, stru->select[7], 250 + (1920 / 4) * 3 - 128, 200 + (1150 / 4) * 1 - 128);
	transparency(stru, stru->select[8], 250 + (1920 / 4) * 0 - 128, 200 + (1150 / 4) * 2 - 128);
	transparency(stru, stru->select[9], 250 + (1920 / 4) * 1 - 128, 200 + (1150 / 4) * 2 - 128);
	transparency(stru, stru->select[10], 250 + (1920 / 4) * 2 - 128, 200 + (1150 / 4) * 2 - 128);
	transparency(stru, stru->select[11], 250 + (1920 / 4) * 3 - 128, 200 + (1150 / 4) * 2 - 128);
	transparency(stru, stru->arrow[stru->frames % 5], 250 + (1920 / 4) * (i % 4) + 130, 200 + (1150 / 4) * (i / 4) - 30);
	return (i);
}

//px diff = 204 x && 192 y
