/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites7.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:39:57 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/24 15:19:29 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

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
	return (0);
}
