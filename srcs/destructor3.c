/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:01:55 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/26 14:05:50 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	image_destroyer16(t_struct *stru)
{
	if (stru->o[0])
		mlx_destroy_image(stru->mlx, stru->o[0]);
	if (stru->o[1])
		mlx_destroy_image(stru->mlx, stru->o[1]);
	if (stru->o[2])
		mlx_destroy_image(stru->mlx, stru->o[2]);
	if (stru->o[3])
		mlx_destroy_image(stru->mlx, stru->o[3]);
	if (stru->o[4])
		mlx_destroy_image(stru->mlx, stru->o[4]);
	if (stru->o[5])
		mlx_destroy_image(stru->mlx, stru->o[5]);
	if (stru->o[6])
		mlx_destroy_image(stru->mlx, stru->o[6]);
	if (stru->o[7])
		mlx_destroy_image(stru->mlx, stru->o[7]);
}

static void	image_destroyer15(t_struct *stru)
{
	if (stru->dlc[0])
		mlx_destroy_image(stru->mlx, stru->dlc[0]);
	if (stru->dlc[1])
		mlx_destroy_image(stru->mlx, stru->dlc[1]);
	if (stru->dlc[2])
		mlx_destroy_image(stru->mlx, stru->dlc[2]);
	if (stru->dlc[3])
		mlx_destroy_image(stru->mlx, stru->dlc[3]);
	if (stru->dlc[4])
		mlx_destroy_image(stru->mlx, stru->dlc[4]);
	if (stru->dlc[5])
		mlx_destroy_image(stru->mlx, stru->dlc[5]);
	if (stru->dlc[6])
		mlx_destroy_image(stru->mlx, stru->dlc[6]);
	if (stru->dlc[7])
		mlx_destroy_image(stru->mlx, stru->dlc[7]);
	image_destroyer16(stru);
}

void	image_destroyer14(t_struct *stru)
{
	if (stru->ru[0])
		mlx_destroy_image(stru->mlx, stru->ru[0]);
	if (stru->ru[1])
		mlx_destroy_image(stru->mlx, stru->ru[1]);
	if (stru->ru[2])
		mlx_destroy_image(stru->mlx, stru->ru[2]);
	if (stru->ru[3])
		mlx_destroy_image(stru->mlx, stru->ru[3]);
	if (stru->ru[4])
		mlx_destroy_image(stru->mlx, stru->ru[4]);
	if (stru->ru[5])
		mlx_destroy_image(stru->mlx, stru->ru[5]);
	if (stru->ru[6])
		mlx_destroy_image(stru->mlx, stru->ru[6]);
	if (stru->ru[7])
		mlx_destroy_image(stru->mlx, stru->ru[7]);
	image_destroyer15(stru);
}
