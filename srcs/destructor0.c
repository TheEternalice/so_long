/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:15:17 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/07 13:59:43 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	image_destroyer3(t_struct *stru)
{
	mlx_destroy_image(stru->mlx, stru->rc[0]);
	mlx_destroy_image(stru->mlx, stru->rc[1]);
	mlx_destroy_image(stru->mlx, stru->rc[2]);
	mlx_destroy_image(stru->mlx, stru->rc[3]);
	mlx_destroy_image(stru->mlx, stru->rc[4]);
	mlx_destroy_image(stru->mlx, stru->rc[5]);
	mlx_destroy_image(stru->mlx, stru->rc[6]);
	mlx_destroy_image(stru->mlx, stru->rc[7]);
	mlx_destroy_image(stru->mlx, stru->o[0]);
	mlx_destroy_image(stru->mlx, stru->o[1]);
	mlx_destroy_image(stru->mlx, stru->o[2]);
	mlx_destroy_image(stru->mlx, stru->o[3]);
	mlx_destroy_image(stru->mlx, stru->o[4]);
	mlx_destroy_image(stru->mlx, stru->o[5]);
	mlx_destroy_image(stru->mlx, stru->o[6]);
	mlx_destroy_image(stru->mlx, stru->o[7]);
	mlx_destroy_image(stru->mlx, stru->dlc[0]);
	mlx_destroy_image(stru->mlx, stru->dlc[1]);
	mlx_destroy_image(stru->mlx, stru->dlc[2]);
	mlx_destroy_image(stru->mlx, stru->dlc[3]);
	mlx_destroy_image(stru->mlx, stru->dlc[4]);
	mlx_destroy_image(stru->mlx, stru->dlc[5]);
	mlx_destroy_image(stru->mlx, stru->dlc[6]);
	mlx_destroy_image(stru->mlx, stru->dlc[7]);
	image_destroyer4(stru);
}

static void	image_destroyer2(t_struct *stru)
{
	mlx_destroy_image(stru->mlx, stru->u[0]);
	mlx_destroy_image(stru->mlx, stru->u[1]);
	mlx_destroy_image(stru->mlx, stru->u[2]);
	mlx_destroy_image(stru->mlx, stru->u[3]);
	mlx_destroy_image(stru->mlx, stru->u[4]);
	mlx_destroy_image(stru->mlx, stru->u[5]);
	mlx_destroy_image(stru->mlx, stru->u[6]);
	mlx_destroy_image(stru->mlx, stru->u[7]);
	mlx_destroy_image(stru->mlx, stru->ru[0]);
	mlx_destroy_image(stru->mlx, stru->ru[1]);
	mlx_destroy_image(stru->mlx, stru->ru[2]);
	mlx_destroy_image(stru->mlx, stru->ru[3]);
	mlx_destroy_image(stru->mlx, stru->ru[4]);
	mlx_destroy_image(stru->mlx, stru->ru[5]);
	mlx_destroy_image(stru->mlx, stru->ru[6]);
	mlx_destroy_image(stru->mlx, stru->ru[7]);
	mlx_destroy_image(stru->mlx, stru->c[0]);
	mlx_destroy_image(stru->mlx, stru->c[1]);
	mlx_destroy_image(stru->mlx, stru->c[2]);
	mlx_destroy_image(stru->mlx, stru->c[3]);
	mlx_destroy_image(stru->mlx, stru->c[4]);
	mlx_destroy_image(stru->mlx, stru->c[5]);
	mlx_destroy_image(stru->mlx, stru->c[6]);
	mlx_destroy_image(stru->mlx, stru->c[7]);
	image_destroyer3(stru);
}

static void	image_destroyer1(t_struct *stru)
{
	mlx_destroy_image(stru->mlx, stru->rborder[0]);
	mlx_destroy_image(stru->mlx, stru->rborder[1]);
	mlx_destroy_image(stru->mlx, stru->rborder[2]);
	mlx_destroy_image(stru->mlx, stru->rborder[3]);
	mlx_destroy_image(stru->mlx, stru->rborder[4]);
	mlx_destroy_image(stru->mlx, stru->rborder[5]);
	mlx_destroy_image(stru->mlx, stru->rborder[6]);
	mlx_destroy_image(stru->mlx, stru->rborder[7]);
	mlx_destroy_image(stru->mlx, stru->tborder[0]);
	mlx_destroy_image(stru->mlx, stru->tborder[1]);
	mlx_destroy_image(stru->mlx, stru->tborder[2]);
	mlx_destroy_image(stru->mlx, stru->tborder[3]);
	mlx_destroy_image(stru->mlx, stru->tborder[4]);
	mlx_destroy_image(stru->mlx, stru->tborder[5]);
	mlx_destroy_image(stru->mlx, stru->tborder[6]);
	mlx_destroy_image(stru->mlx, stru->tborder[7]);
	mlx_destroy_image(stru->mlx, stru->bborder[0]);
	mlx_destroy_image(stru->mlx, stru->bborder[1]);
	mlx_destroy_image(stru->mlx, stru->bborder[2]);
	mlx_destroy_image(stru->mlx, stru->bborder[3]);
	mlx_destroy_image(stru->mlx, stru->bborder[4]);
	mlx_destroy_image(stru->mlx, stru->bborder[5]);
	mlx_destroy_image(stru->mlx, stru->bborder[6]);
	mlx_destroy_image(stru->mlx, stru->bborder[7]);
	image_destroyer2(stru);
}

static void	image_destroyer0(t_struct *stru)
{
	mlx_destroy_image(stru->mlx, stru->player[0]);
	mlx_destroy_image(stru->mlx, stru->player[1]);
	mlx_destroy_image(stru->mlx, stru->player[2]);
	mlx_destroy_image(stru->mlx, stru->player[3]);
	mlx_destroy_image(stru->mlx, stru->water[0]);
	mlx_destroy_image(stru->mlx, stru->water[1]);
	mlx_destroy_image(stru->mlx, stru->water[2]);
	mlx_destroy_image(stru->mlx, stru->water[3]);
	mlx_destroy_image(stru->mlx, stru->water[4]);
	mlx_destroy_image(stru->mlx, stru->water[5]);
	mlx_destroy_image(stru->mlx, stru->water[6]);
	mlx_destroy_image(stru->mlx, stru->water[7]);
	mlx_destroy_image(stru->mlx, stru->lborder[0]);
	mlx_destroy_image(stru->mlx, stru->lborder[1]);
	mlx_destroy_image(stru->mlx, stru->lborder[2]);
	mlx_destroy_image(stru->mlx, stru->lborder[3]);
	mlx_destroy_image(stru->mlx, stru->lborder[4]);
	mlx_destroy_image(stru->mlx, stru->lborder[5]);
	mlx_destroy_image(stru->mlx, stru->lborder[6]);
	mlx_destroy_image(stru->mlx, stru->lborder[7]);
	mlx_destroy_image(stru->mlx, stru->canva);
	mlx_destroy_image(stru->mlx, stru->floor);
	image_destroyer1(stru);
	mlx_destroy_window(stru->mlx, stru->mlx_win);
	mlx_destroy_display(stru->mlx);
}

int	quit(t_struct *stru)
{
	image_destroyer0(stru);
	free_struct(stru);
	free(stru->mlx);
	exit(1);
}
