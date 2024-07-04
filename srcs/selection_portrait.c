/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_portrait.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:01:17 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/04 14:22:14 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	init_portrait2(t_struct *stru, int size)
{
	stru->select[10] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/shamanselect.xpm", &size, &size);
	if (!stru->select[10])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->select[11] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/windselect.xpm", &size, &size);
	if (!stru->select[11])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	return (0);
}

static int	init_portrait1(t_struct *stru, int size)
{
	stru->select[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/archerselect.xpm", &size, &size);
	if (!stru->select[5])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->select[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/cyclopselect.xpm", &size, &size);
	if (!stru->select[6])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->select[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/fairyselect.xpm", &size, &size);
	if (!stru->select[7])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->select[8] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/hunterselect.xpm", &size, &size);
	if (!stru->select[8])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->select[9] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/paladinselect.xpm", &size, &size);
	if (!stru->select[9])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	if (init_portrait2(stru, size))
		return (1);
	return (0);
}

int	init_portrait0(t_struct *stru)
{
	int	size;

	stru->select[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druidselect.xpm", &size, &size);
	if (!stru->select[0])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->select[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/nagaselect.xpm", &size, &size);
	if (!stru->select[1])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->select[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wolfselect.xpm", &size, &size);
	if (!stru->select[2])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->select[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/spiderselect.xpm", &size, &size);
	if (!stru->select[3])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->select[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/treantselect.xpm", &size, &size);
	if (!stru->select[4])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	if (init_portrait1(stru, size))
		return (1);
	return (0);
}
