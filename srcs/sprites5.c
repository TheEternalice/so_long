/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:47:20 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 13:00:15 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	sprites_e(t_struct *stru)
{
	int	wh;
	int	he;

	stru->exit[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/exit0.xpm", &wh, &he);
	if (!stru->exit[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->exit[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/exit1.xpm", &wh, &he);
	if (!stru->exit[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->exit[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/exit2.xpm", &wh, &he);
	if (!stru->exit[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->exit[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/exit3.xpm", &wh, &he);
	if (!stru->exit[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}

static int	sprites_c1(t_struct *stru, int wh, int he)
{
	if (!stru->coin[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->coin[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/coin5.xpm", &wh, &he);
	if (!stru->coin[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}

int	sprites_c0(t_struct *stru)
{
	int	wh;
	int	he;

	stru->coin[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/coin0.xpm", &wh, &he);
	if (!stru->coin[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->coin[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/coin1.xpm", &wh, &he);
	if (!stru->coin[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->coin[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/coin2.xpm", &wh, &he);
	if (!stru->coin[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->coin[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/coin3.xpm", &wh, &he);
	if (!stru->coin[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->coin[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/coin4.xpm", &wh, &he);
	if (sprites_c1(stru, wh, he))
		return (23);
	return (0);
}

int	sprites_pw0(t_struct *stru)
{
	int	wh;
	int	he;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druidw0.xpm", &wh, &he);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druidw1.xpm", &wh, &he);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druidw2.xpm", &wh, &he);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druidw3.xpm", &wh, &he);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}
