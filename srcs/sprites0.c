/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:03:25 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/27 15:51:36 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

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
	stru->water[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/water3.xpm", &wh, &he);
	if (!stru->water[3])
		return (write(2, "mlx file to image fail\n", 23));
	return (0);
}

int	sprite_P0(t_struct *stru)
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
