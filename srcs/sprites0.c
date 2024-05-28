/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:03:25 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/28 15:51:54 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	sprites_environment1(t_struct *stru, int wh, int he)
{
	stru->water[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water3.xpm", &wh, &he);
	if (!stru->water[3])
		return (write(2, "mlx file to image fail\n", 23));
	stru->water[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water4.xpm", &wh, &he);
	if (!stru->water[4])
		return (write(2, "mlx file to image fail\n", 23));
	stru->water[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water5.xpm", &wh, &he);
	if (!stru->water[5])
		return (write(2, "mlx file to image fail\n", 23));
	stru->water[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water6.xpm", &wh, &he);
	if (!stru->water[6])
		return (write(2, "mlx file to image fail\n", 23));
	stru->water[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water7.xpm", &wh, &he);
	if (!stru->water[7])
		return (write(2, "mlx file to image fail\n", 23));
	return (0);
}

int	sprites_environment0(t_struct *stru)
{
	int	wh;
	int	he;

	stru->floor = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/grass.xpm", &wh, &he);
	if (!stru->floor)
		return (write(2, "mlx file to image fail\n", 23));
	stru->water[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water0.xpm", &wh, &he);
	if (!stru->water[0])
		return (write(2, "mlx file to image fail\n", 23));
	stru->water[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water1.xpm", &wh, &he);
	if (!stru->water[1])
		return (write(2, "mlx file to image fail\n", 23));
	stru->water[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water2.xpm", &wh, &he);
	if (!stru->water[2])
		return (write(2, "mlx file to image fail\n", 23));
	if (sprites_environment1(stru, wh, he))
		return (23);
	return (0);
}

int	sprites_p0(t_struct *stru)
{
	int	wh;
	int	he;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druid0.xpm", &wh, &he);
	if (!stru->player[0])
		return (write(2, "mlx file to image fail\n", 23));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druid1.xpm", &wh, &he);
	if (!stru->player[1])
		return (write(2, "mlx file to image fail\n", 23));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druid2.xpm", &wh, &he);
	if (!stru->player[2])
		return (write(2, "mlx file to image fail\n", 23));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druid3.xpm", &wh, &he);
	if (!stru->player[3])
		return (write(2, "mlx file to image fail\n", 23));
	return (0);
}

int	sprites_init(t_struct *stru)
{
	if (sprites_environment0(stru))
		return (1);
	if (sprites_p0(stru))
		return (1);
	return (0);
}
