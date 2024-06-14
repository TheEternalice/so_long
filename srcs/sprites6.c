/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites6.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:42:57 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/14 14:52:42 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	sprites_gc1(t_struct *stru, int wh, int he)
{
	if (!stru->gcoin[4])
		return (write(2, "mlx file to image fail\n", 23));
	stru->gcoin[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/gcoin5.xpm", &wh, &he);
	if (!stru->gcoin[5])
		return (write(2, "mlx file to image fail\n", 23));
	return (0);
}

int	sprites_gc0(t_struct *stru)
{
	int	wh;
	int	he;

	stru->gcoin[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/gcoin0.xpm", &wh, &he);
	if (!stru->gcoin[0])
		return (write(2, "mlx file to image fail\n", 23));
	stru->gcoin[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/gcoin1.xpm", &wh, &he);
	if (!stru->gcoin[1])
		return (write(2, "mlx file to image fail\n", 23));
	stru->gcoin[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/gcoin2.xpm", &wh, &he);
	if (!stru->gcoin[2])
		return (write(2, "mlx file to image fail\n", 23));
	stru->gcoin[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/gcoin3.xpm", &wh, &he);
	if (!stru->gcoin[3])
		return (write(2, "mlx file to image fail\n", 23));
	stru->gcoin[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/gcoin4.xpm", &wh, &he);
	if (sprites_gc1(stru, wh, he))
		return (23);
	return (0);
}
