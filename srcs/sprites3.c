/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:53:58 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 12:59:47 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	sprites_environment18(t_struct *stru, int wh, int he)
{
	stru->dlc[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/dlc4.xpm", &wh, &he);
	if (!stru->dlc[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->dlc[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/dlc5.xpm", &wh, &he);
	if (!stru->dlc[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->dlc[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/dlc6.xpm", &wh, &he);
	if (!stru->dlc[6])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->dlc[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/dlc7.xpm", &wh, &he);
	if (!stru->dlc[7])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment19(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment17(t_struct *stru, int wh, int he)
{
	stru->o[7] = mlx_xpm_file_to_image(stru->mlx, "./sprites/O7.xpm", &wh, &he);
	if (!stru->o[7])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->dlc[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/dlc0.xpm", &wh, &he);
	if (!stru->dlc[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->dlc[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/dlc1.xpm", &wh, &he);
	if (!stru->dlc[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->dlc[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/dlc2.xpm", &wh, &he);
	if (!stru->dlc[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->dlc[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/dlc3.xpm", &wh, &he);
	if (!stru->dlc[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment18(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment16(t_struct *stru, int wh, int he)
{
	stru->o[2] = mlx_xpm_file_to_image(stru->mlx, "./sprites/O2.xpm", &wh, &he);
	if (!stru->o[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->o[3] = mlx_xpm_file_to_image(stru->mlx, "./sprites/O3.xpm", &wh, &he);
	if (!stru->o[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->o[4] = mlx_xpm_file_to_image(stru->mlx, "./sprites/O4.xpm", &wh, &he);
	if (!stru->o[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->o[5] = mlx_xpm_file_to_image(stru->mlx, "./sprites/O5.xpm", &wh, &he);
	if (!stru->o[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->o[6] = mlx_xpm_file_to_image(stru->mlx, "./sprites/O6.xpm", &wh, &he);
	if (!stru->o[6])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment17(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment15(t_struct *stru, int wh, int he)
{
	stru->rc[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RC5.xpm", &wh, &he);
	if (!stru->rc[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->rc[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RC6.xpm", &wh, &he);
	if (!stru->rc[6])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->rc[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RC7.xpm", &wh, &he);
	if (!stru->rc[7])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->o[0] = mlx_xpm_file_to_image(stru->mlx, "./sprites/O0.xpm", &wh, &he);
	if (!stru->o[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->o[1] = mlx_xpm_file_to_image(stru->mlx, "./sprites/O1.xpm", &wh, &he);
	if (!stru->o[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment16(stru, wh, he))
		return (23);
	return (0);
}

int	sprites_environment14(t_struct *stru, int wh, int he)
{
	stru->rc[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RC0.xpm", &wh, &he);
	if (!stru->rc[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->rc[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RC1.xpm", &wh, &he);
	if (!stru->rc[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->rc[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RC2.xpm", &wh, &he);
	if (!stru->rc[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->rc[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RC3.xpm", &wh, &he);
	if (!stru->rc[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->rc[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RC4.xpm", &wh, &he);
	if (!stru->rc[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment15(stru, wh, he))
		return (23);
	return (0);
}
