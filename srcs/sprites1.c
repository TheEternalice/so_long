/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:33:58 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/04 13:40:19 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	sprites_environment4(t_struct *stru, int wh, int he)
{
	stru->rborder[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder0.xpm", &wh, &he);
	if (!stru->rborder[0])
		return (write(2, "mlx file to image fail\n", 23));
	stru->rborder[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder1.xpm", &wh, &he);
	if (!stru->rborder[1])
		return (write(2, "mlx file to image fail\n", 23));
	stru->rborder[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder2.xpm", &wh, &he);
	if (!stru->rborder[2])
		return (write(2, "mlx file to image fail\n", 23));
	stru->rborder[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder3.xpm", &wh, &he);
	if (!stru->rborder[3])
		return (write(2, "mlx file to image fail\n", 23));
	stru->rborder[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder4.xpm", &wh, &he);
	if (!stru->rborder[4])
		return (write(2, "mlx file to image fail\n", 23));
	stru->rborder[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder5.xpm", &wh, &he);
	if (!stru->rborder[5])
		return (write(2, "mlx file to image fail\n", 23));
	stru->rborder[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder6.xpm", &wh, &he);
	if (!stru->rborder[6])
		return (write(2, "mlx file to image fail\n", 23));
	stru->rborder[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder7.xpm", &wh, &he);
	if (!stru->rborder[7])
		return (write(2, "mlx file to image fail\n", 23));
	return (0);
}

int	sprites_environment3(t_struct *stru, int wh, int he)
{
	stru->lborder[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/lborder4.xpm", &wh, &he);
	if (!stru->lborder[4])
		return (write(2, "mlx file to image fail\n", 23));
	stru->lborder[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/lborder5.xpm", &wh, &he);
	if (!stru->lborder[5])
		return (write(2, "mlx file to image fail\n", 23));
	stru->lborder[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/lborder6.xpm", &wh, &he);
	if (!stru->lborder[6])
		return (write(2, "mlx file to image fail\n", 23));
	stru->lborder[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/lborder7.xpm", &wh, &he);
	if (!stru->lborder[7])
		return (write(2, "mlx file to image fail\n", 23));
	if (sprites_environment4(stru, wh, he))
		return (23);
	return (0);
}
