/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:15:17 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/04 13:53:56 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

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
