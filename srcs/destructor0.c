/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:15:17 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/04 11:14:35 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	image_destroyer3(t_struct *stru)
{
	if (stru->rc[0])
		mlx_destroy_image(stru->mlx, stru->rc[0]);
	if (stru->rc[1])
		mlx_destroy_image(stru->mlx, stru->rc[1]);
	if (stru->rc[2])
		mlx_destroy_image(stru->mlx, stru->rc[2]);
	if (stru->rc[3])
		mlx_destroy_image(stru->mlx, stru->rc[3]);
	if (stru->rc[4])
		mlx_destroy_image(stru->mlx, stru->rc[4]);
	if (stru->rc[5])
		mlx_destroy_image(stru->mlx, stru->rc[5]);
	if (stru->rc[6])
		mlx_destroy_image(stru->mlx, stru->rc[6]);
	if (stru->rc[7])
		mlx_destroy_image(stru->mlx, stru->rc[7]);
	image_destroyer4(stru);
}

static void	image_destroyer2(t_struct *stru)
{
	if (stru->u[0])
		mlx_destroy_image(stru->mlx, stru->u[0]);
	if (stru->u[1])
		mlx_destroy_image(stru->mlx, stru->u[1]);
	if (stru->u[2])
		mlx_destroy_image(stru->mlx, stru->u[2]);
	if (stru->u[3])
		mlx_destroy_image(stru->mlx, stru->u[3]);
	if (stru->u[4])
		mlx_destroy_image(stru->mlx, stru->u[4]);
	if (stru->u[5])
		mlx_destroy_image(stru->mlx, stru->u[5]);
	if (stru->u[6])
		mlx_destroy_image(stru->mlx, stru->u[6]);
	if (stru->u[7])
		mlx_destroy_image(stru->mlx, stru->u[7]);
	image_destroyer3(stru);
}

static void	image_destroyer1(t_struct *stru)
{
	if (stru->rborder[0])
		mlx_destroy_image(stru->mlx, stru->rborder[0]);
	if (stru->rborder[1])
		mlx_destroy_image(stru->mlx, stru->rborder[1]);
	if (stru->rborder[2])
		mlx_destroy_image(stru->mlx, stru->rborder[2]);
	if (stru->rborder[3])
		mlx_destroy_image(stru->mlx, stru->rborder[3]);
	if (stru->rborder[4])
		mlx_destroy_image(stru->mlx, stru->rborder[4]);
	if (stru->rborder[5])
		mlx_destroy_image(stru->mlx, stru->rborder[5]);
	if (stru->rborder[6])
		mlx_destroy_image(stru->mlx, stru->rborder[6]);
	if (stru->rborder[7])
		mlx_destroy_image(stru->mlx, stru->rborder[7]);
	image_destroyer2(stru);
}

static void	image_destroyer0(t_struct *stru)
{
	if (stru->exit[0])
		mlx_destroy_image(stru->mlx, stru->exit[0]);
	if (stru->exit[1])
		mlx_destroy_image(stru->mlx, stru->exit[1]);
	if (stru->exit[2])
		mlx_destroy_image(stru->mlx, stru->exit[2]);
	if (stru->exit[3])
		mlx_destroy_image(stru->mlx, stru->exit[3]);
	if (stru->canva)
		mlx_destroy_image(stru->mlx, stru->canva);
	if (stru->floor)
		mlx_destroy_image(stru->mlx, stru->floor);
	image_destroyer1(stru);
	if (stru->mlx && stru->mlx_win)
		mlx_destroy_window(stru->mlx, stru->mlx_win);
	if (stru->mlx)
		mlx_destroy_display(stru->mlx);
}

int	quit(t_struct *stru)
{
	mlx_do_key_autorepeaton(stru->mlx);
	image_destroyer0(stru);
	free_struct(stru);
	if (stru->sentinel.x)
		free(stru->sentinel.x);
	if (stru->sentinel.y)
		free(stru->sentinel.y);
	free(stru->mlx);
	exit(1);
}
