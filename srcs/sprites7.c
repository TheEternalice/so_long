/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites7.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:39:57 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/27 15:42:26 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	waka1(t_struct *stru, int wh, int he)
{
	stru->waka[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/waka4.xpm", &wh, &he);
	if (!stru->waka[4])
		return (write(2, "mlx file to image fail\n", 23));
	stru->waka[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/waka5.xpm", &wh, &he);
	if (!stru->waka[5])
		return (write(2, "mlx file to image fail\n", 23));
	stru->waka[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/waka6.xpm", &wh, &he);
	if (!stru->waka[6])
		return (write(2, "mlx file to image fail\n", 23));
	stru->waka[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/waka7.xpm", &wh, &he);
	if (!stru->waka[7])
		return (write(2, "mlx file to image fail\n", 23));
	return (0);
}

int	waka0(t_struct *stru)
{
	int	wh;
	int	he;

	stru->waka[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/waka0.xpm", &wh, &he);
	if (!stru->waka[0])
		return (write(2, "mlx file to image fail\n", 23));
	stru->waka[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/waka1.xpm", &wh, &he);
	if (!stru->waka[1])
		return (write(2, "mlx file to image fail\n", 23));
	stru->waka[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/waka2.xpm", &wh, &he);
	if (!stru->waka[2])
		return (write(2, "mlx file to image fail\n", 23));
	stru->waka[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/waka3.xpm", &wh, &he);
	if (!stru->waka[3])
		return (write(2, "mlx file to image fail\n", 23));
	if (waka1(stru, wh, he))
		return (1);
	return (0);
}

int	sprites_enemy0(t_struct *stru)
{
	int	wh;
	int	he;

	stru->enemy[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/enemy0.xpm", &wh, &he);
	if (!stru->enemy[0])
		return (write(2, "mlx file to image fail\n", 23));
	stru->enemy[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/enemy1.xpm", &wh, &he);
	if (!stru->enemy[1])
		return (write(2, "mlx file to image fail\n", 23));
	stru->enemy[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/enemy2.xpm", &wh, &he);
	if (!stru->enemy[2])
		return (write(2, "mlx file to image fail\n", 23));
	stru->enemy[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/enemy3.xpm", &wh, &he);
	if (!stru->enemy[3])
		return (write(2, "mlx file to image fail\n", 23));
	if (waka0(stru))
		return (1);
	return (0);
}
