/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:03:25 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/04 12:59:41 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	sprites_environment3(t_struct *stru, int wh, int he)
{
	stru->lborder[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/lborder4.xpm", &wh, &he);
	if (!stru->lborder[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->lborder[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/lborder5.xpm", &wh, &he);
	if (!stru->lborder[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->lborder[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/lborder6.xpm", &wh, &he);
	if (!stru->lborder[6])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->lborder[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/lborder7.xpm", &wh, &he);
	if (!stru->lborder[7])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment4(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment2(t_struct *stru, int wh, int he)
{
	stru->lborder[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/lborder0.xpm", &wh, &he);
	if (!stru->lborder[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->lborder[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/lborder1.xpm", &wh, &he);
	if (!stru->lborder[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->lborder[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/lborder2.xpm", &wh, &he);
	if (!stru->lborder[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->lborder[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/lborder3.xpm", &wh, &he);
	if (!stru->lborder[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment3(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment1(t_struct *stru, int wh, int he)
{
	stru->water[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water3.xpm", &wh, &he);
	if (!stru->water[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->water[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water4.xpm", &wh, &he);
	if (!stru->water[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->water[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water5.xpm", &wh, &he);
	if (!stru->water[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->water[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water6.xpm", &wh, &he);
	if (!stru->water[6])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->water[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water7.xpm", &wh, &he);
	if (!stru->water[7])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment2(stru, wh, he))
		return (23);
	return (0);
}

int	sprites_environment0(t_struct *stru)
{
	int	wh;
	int	he;

	stru->floor = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/grass.xpm", &wh, &he);
	if (!stru->floor)
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->water[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water0.xpm", &wh, &he);
	if (!stru->water[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->water[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water1.xpm", &wh, &he);
	if (!stru->water[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->water[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water2.xpm", &wh, &he);
	if (!stru->water[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment1(stru, wh, he))
		return (23);
	return (0);
}
