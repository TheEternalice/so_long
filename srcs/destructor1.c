/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:58:12 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/24 13:21:07 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// static void	image_destroyer7(t_struct *stru)
// {
// 	mlx_destroy_image(stru->mlx, stru->rc[0]);
// 	mlx_destroy_image(stru->mlx, stru->rc[1]);
// 	mlx_destroy_image(stru->mlx, stru->rc[2]);
// 	mlx_destroy_image(stru->mlx, stru->rc[3]);
// 	mlx_destroy_image(stru->mlx, stru->rc[4]);
// 	mlx_destroy_image(stru->mlx, stru->rc[5]);
// 	mlx_destroy_image(stru->mlx, stru->rc[6]);
// 	mlx_destroy_image(stru->mlx, stru->rc[7]);
// 	mlx_destroy_image(stru->mlx, stru->o[0]);
// 	mlx_destroy_image(stru->mlx, stru->o[1]);
// 	mlx_destroy_image(stru->mlx, stru->o[2]);
// 	mlx_destroy_image(stru->mlx, stru->o[3]);
// 	mlx_destroy_image(stru->mlx, stru->o[4]);
// 	mlx_destroy_image(stru->mlx, stru->o[5]);
// 	mlx_destroy_image(stru->mlx, stru->o[6]);
// 	mlx_destroy_image(stru->mlx, stru->o[7]);
// 	mlx_destroy_image(stru->mlx, stru->dlc[0]);
// 	mlx_destroy_image(stru->mlx, stru->dlc[1]);
// 	mlx_destroy_image(stru->mlx, stru->dlc[2]);
// 	mlx_destroy_image(stru->mlx, stru->dlc[3]);
// 	mlx_destroy_image(stru->mlx, stru->dlc[4]);
// 	mlx_destroy_image(stru->mlx, stru->dlc[5]);
// 	mlx_destroy_image(stru->mlx, stru->dlc[6]);
// 	mlx_destroy_image(stru->mlx, stru->dlc[7]);
// }

// static void	image_destroyer6(t_struct *stru)
// {
// 	mlx_destroy_image(stru->mlx, stru->u[0]);
// 	mlx_destroy_image(stru->mlx, stru->u[1]);
// 	mlx_destroy_image(stru->mlx, stru->u[2]);
// 	mlx_destroy_image(stru->mlx, stru->u[3]);
// 	mlx_destroy_image(stru->mlx, stru->u[4]);
// 	mlx_destroy_image(stru->mlx, stru->u[5]);
// 	mlx_destroy_image(stru->mlx, stru->u[6]);
// 	mlx_destroy_image(stru->mlx, stru->u[7]);
// 	mlx_destroy_image(stru->mlx, stru->ru[0]);
// 	mlx_destroy_image(stru->mlx, stru->ru[1]);
// 	mlx_destroy_image(stru->mlx, stru->ru[2]);
// 	mlx_destroy_image(stru->mlx, stru->ru[3]);
// 	mlx_destroy_image(stru->mlx, stru->ru[4]);
// 	mlx_destroy_image(stru->mlx, stru->ru[5]);
// 	mlx_destroy_image(stru->mlx, stru->ru[6]);
// 	mlx_destroy_image(stru->mlx, stru->ru[7]);
// 	mlx_destroy_image(stru->mlx, stru->c[0]);
// 	mlx_destroy_image(stru->mlx, stru->c[1]);
// 	mlx_destroy_image(stru->mlx, stru->c[2]);
// 	mlx_destroy_image(stru->mlx, stru->c[3]);
// 	mlx_destroy_image(stru->mlx, stru->c[4]);
// 	mlx_destroy_image(stru->mlx, stru->c[5]);
// 	mlx_destroy_image(stru->mlx, stru->c[6]);
// 	mlx_destroy_image(stru->mlx, stru->c[7]);
// 	image_destroyer3(stru);
// }

static void	image_destroyer5(t_struct *stru)
{
	mlx_destroy_image(stru->mlx, stru->trc[0]);
	mlx_destroy_image(stru->mlx, stru->trc[1]);
	mlx_destroy_image(stru->mlx, stru->trc[2]);
	mlx_destroy_image(stru->mlx, stru->trc[3]);
	mlx_destroy_image(stru->mlx, stru->trc[4]);
	mlx_destroy_image(stru->mlx, stru->trc[5]);
	mlx_destroy_image(stru->mlx, stru->trc[6]);
	mlx_destroy_image(stru->mlx, stru->trc[7]);
}

void	image_destroyer4(t_struct *stru)
{
	mlx_destroy_image(stru->mlx, stru->drc[0]);
	mlx_destroy_image(stru->mlx, stru->drc[1]);
	mlx_destroy_image(stru->mlx, stru->drc[2]);
	mlx_destroy_image(stru->mlx, stru->drc[3]);
	mlx_destroy_image(stru->mlx, stru->drc[4]);
	mlx_destroy_image(stru->mlx, stru->drc[5]);
	mlx_destroy_image(stru->mlx, stru->drc[6]);
	mlx_destroy_image(stru->mlx, stru->drc[7]);
	mlx_destroy_image(stru->mlx, stru->tlc[0]);
	mlx_destroy_image(stru->mlx, stru->tlc[1]);
	mlx_destroy_image(stru->mlx, stru->tlc[2]);
	mlx_destroy_image(stru->mlx, stru->tlc[3]);
	mlx_destroy_image(stru->mlx, stru->tlc[4]);
	mlx_destroy_image(stru->mlx, stru->tlc[5]);
	mlx_destroy_image(stru->mlx, stru->tlc[6]);
	mlx_destroy_image(stru->mlx, stru->tlc[7]);
	image_destroyer5(stru);
}
