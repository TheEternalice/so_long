/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:58:12 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/26 13:25:08 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	image_destroyer8(t_struct *stru)
{
	if (stru->step[0])
		mlx_destroy_image(stru->mlx, stru->step[0]);
	if (stru->step[1])
		mlx_destroy_image(stru->mlx, stru->step[1]);
	if (stru->step[2])
		mlx_destroy_image(stru->mlx, stru->step[2]);
	if (stru->step[3])
		mlx_destroy_image(stru->mlx, stru->step[3]);
	if (stru->step[4])
		mlx_destroy_image(stru->mlx, stru->step[4]);
	if (stru->step[5])
		mlx_destroy_image(stru->mlx, stru->step[5]);
	if (stru->step[6])
		mlx_destroy_image(stru->mlx, stru->step[6]);
	if (stru->step[7])
		mlx_destroy_image(stru->mlx, stru->step[7]);
	if (stru->step[8])
		mlx_destroy_image(stru->mlx, stru->step[8]);
	if (stru->step[9])
		mlx_destroy_image(stru->mlx, stru->step[9]);
	image_destroyer9(stru);
}

static void	image_destroyer7(t_struct *stru)
{
	if (stru->trc[0])
		mlx_destroy_image(stru->mlx, stru->trc[0]);
	if (stru->trc[1])
		mlx_destroy_image(stru->mlx, stru->trc[1]);
	if (stru->trc[2])
		mlx_destroy_image(stru->mlx, stru->trc[2]);
	if (stru->trc[3])
		mlx_destroy_image(stru->mlx, stru->trc[3]);
	if (stru->trc[4])
		mlx_destroy_image(stru->mlx, stru->trc[4]);
	if (stru->trc[5])
		mlx_destroy_image(stru->mlx, stru->trc[5]);
	if (stru->trc[6])
		mlx_destroy_image(stru->mlx, stru->trc[6]);
	if (stru->trc[7])
		mlx_destroy_image(stru->mlx, stru->trc[7]);
	image_destroyer8(stru);
}

static void	image_destroyer6(t_struct *stru)
{
	if (stru->lborder[0])
		mlx_destroy_image(stru->mlx, stru->lborder[0]);
	if (stru->lborder[1])
		mlx_destroy_image(stru->mlx, stru->lborder[1]);
	if (stru->lborder[2])
		mlx_destroy_image(stru->mlx, stru->lborder[2]);
	if (stru->lborder[3])
		mlx_destroy_image(stru->mlx, stru->lborder[3]);
	if (stru->lborder[4])
		mlx_destroy_image(stru->mlx, stru->lborder[4]);
	if (stru->lborder[5])
		mlx_destroy_image(stru->mlx, stru->lborder[5]);
	if (stru->lborder[6])
		mlx_destroy_image(stru->mlx, stru->lborder[6]);
	if (stru->lborder[7])
		mlx_destroy_image(stru->mlx, stru->lborder[7]);
	image_destroyer7(stru);
}

static void	image_destroyer5(t_struct *stru)
{
	if (stru->tlc[0])
		mlx_destroy_image(stru->mlx, stru->tlc[0]);
	if (stru->tlc[1])
		mlx_destroy_image(stru->mlx, stru->tlc[1]);
	if (stru->tlc[2])
		mlx_destroy_image(stru->mlx, stru->tlc[2]);
	if (stru->tlc[3])
		mlx_destroy_image(stru->mlx, stru->tlc[3]);
	if (stru->tlc[4])
		mlx_destroy_image(stru->mlx, stru->tlc[4]);
	if (stru->tlc[5])
		mlx_destroy_image(stru->mlx, stru->tlc[5]);
	if (stru->tlc[6])
		mlx_destroy_image(stru->mlx, stru->tlc[6]);
	if (stru->tlc[7])
		mlx_destroy_image(stru->mlx, stru->tlc[7]);
	image_destroyer6(stru);
}

void	image_destroyer4(t_struct *stru)
{
	if (stru->drc[0])
		mlx_destroy_image(stru->mlx, stru->drc[0]);
	if (stru->drc[1])
		mlx_destroy_image(stru->mlx, stru->drc[1]);
	if (stru->drc[2])
		mlx_destroy_image(stru->mlx, stru->drc[2]);
	if (stru->drc[3])
		mlx_destroy_image(stru->mlx, stru->drc[3]);
	if (stru->drc[4])
		mlx_destroy_image(stru->mlx, stru->drc[4]);
	if (stru->drc[5])
		mlx_destroy_image(stru->mlx, stru->drc[5]);
	if (stru->drc[6])
		mlx_destroy_image(stru->mlx, stru->drc[6]);
	if (stru->drc[7])
		mlx_destroy_image(stru->mlx, stru->drc[7]);
	image_destroyer5(stru);
}
