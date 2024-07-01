/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites6.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:42:57 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 13:00:27 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	sprites_steps1(t_struct *stru, int wh, int he)
{
	stru->step[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/five.xpm", &wh, &he);
	if (!stru->step[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->step[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/six.xpm", &wh, &he);
	if (!stru->step[6])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->step[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/seven.xpm", &wh, &he);
	if (!stru->step[7])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->step[8] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/height.xpm", &wh, &he);
	if (!stru->step[8])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->step[9] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/nine.xpm", &wh, &he);
	if (!stru->step[9])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}

static int	sprites_steps0(t_struct *stru, int wh, int he)
{
	stru->step[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/zero.xpm", &wh, &he);
	if (!stru->step[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->step[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/one.xpm", &wh, &he);
	if (!stru->step[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->step[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/two.xpm", &wh, &he);
	if (!stru->step[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->step[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/three.xpm", &wh, &he);
	if (!stru->step[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->step[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/four.xpm", &wh, &he);
	if (!stru->step[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_steps1(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_gc1(t_struct *stru, int wh, int he)
{
	if (!stru->gcoin[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->gcoin[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/gcoin5.xpm", &wh, &he);
	if (!stru->gcoin[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_steps0(stru, wh, he))
		return (23);
	return (0);
}

int	sprites_gc0(t_struct *stru)
{
	int	wh;
	int	he;

	stru->gcoin[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/gcoin0.xpm", &wh, &he);
	if (!stru->gcoin[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->gcoin[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/gcoin1.xpm", &wh, &he);
	if (!stru->gcoin[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->gcoin[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/gcoin2.xpm", &wh, &he);
	if (!stru->gcoin[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->gcoin[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/gcoin3.xpm", &wh, &he);
	if (!stru->gcoin[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->gcoin[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/gcoin4.xpm", &wh, &he);
	if (sprites_gc1(stru, wh, he))
		return (23);
	return (0);
}
