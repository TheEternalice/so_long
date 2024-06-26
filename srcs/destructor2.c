/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:27:27 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/26 14:00:54 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	image_destroyer13(t_struct *stru)
{
	if (stru->c[0])
		mlx_destroy_image(stru->mlx, stru->c[0]);
	if (stru->c[1])
		mlx_destroy_image(stru->mlx, stru->c[1]);
	if (stru->c[2])
		mlx_destroy_image(stru->mlx, stru->c[2]);
	if (stru->c[3])
		mlx_destroy_image(stru->mlx, stru->c[3]);
	if (stru->c[4])
		mlx_destroy_image(stru->mlx, stru->c[4]);
	if (stru->c[5])
		mlx_destroy_image(stru->mlx, stru->c[5]);
	if (stru->c[6])
		mlx_destroy_image(stru->mlx, stru->c[6]);
	if (stru->c[7])
		mlx_destroy_image(stru->mlx, stru->c[7]);
	if (stru->tborder[4])
		mlx_destroy_image(stru->mlx, stru->tborder[4]);
	if (stru->tborder[5])
		mlx_destroy_image(stru->mlx, stru->tborder[5]);
	if (stru->tborder[6])
		mlx_destroy_image(stru->mlx, stru->tborder[6]);
	if (stru->tborder[7])
		mlx_destroy_image(stru->mlx, stru->tborder[7]);
	image_destroyer14(stru);
}

static void	image_destroyer12(t_struct *stru)
{
	if (stru->bborder[0])
		mlx_destroy_image(stru->mlx, stru->bborder[0]);
	if (stru->bborder[1])
		mlx_destroy_image(stru->mlx, stru->bborder[1]);
	if (stru->bborder[2])
		mlx_destroy_image(stru->mlx, stru->bborder[2]);
	if (stru->bborder[3])
		mlx_destroy_image(stru->mlx, stru->bborder[3]);
	if (stru->bborder[4])
		mlx_destroy_image(stru->mlx, stru->bborder[4]);
	if (stru->bborder[5])
		mlx_destroy_image(stru->mlx, stru->bborder[5]);
	if (stru->bborder[6])
		mlx_destroy_image(stru->mlx, stru->bborder[6]);
	if (stru->bborder[7])
		mlx_destroy_image(stru->mlx, stru->bborder[7]);
	if (stru->tborder[0])
		mlx_destroy_image(stru->mlx, stru->tborder[0]);
	if (stru->tborder[1])
		mlx_destroy_image(stru->mlx, stru->tborder[1]);
	if (stru->tborder[2])
		mlx_destroy_image(stru->mlx, stru->tborder[2]);
	if (stru->tborder[3])
		mlx_destroy_image(stru->mlx, stru->tborder[3]);
	image_destroyer13(stru);
}

static void	image_destroyer11(t_struct *stru)
{
	if (stru->player[0])
		mlx_destroy_image(stru->mlx, stru->player[0]);
	if (stru->player[1])
		mlx_destroy_image(stru->mlx, stru->player[1]);
	if (stru->player[2])
		mlx_destroy_image(stru->mlx, stru->player[2]);
	if (stru->player[3])
		mlx_destroy_image(stru->mlx, stru->player[3]);
	if (stru->walk[0])
		mlx_destroy_image(stru->mlx, stru->walk[0]);
	if (stru->walk[1])
		mlx_destroy_image(stru->mlx, stru->walk[1]);
	if (stru->walk[2])
		mlx_destroy_image(stru->mlx, stru->walk[2]);
	if (stru->walk[3])
		mlx_destroy_image(stru->mlx, stru->walk[3]);
	image_destroyer12(stru);
}

static void	image_destroyer10(t_struct *stru)
{
	if (stru->enemy[0])
		mlx_destroy_image(stru->mlx, stru->enemy[0]);
	if (stru->enemy[1])
		mlx_destroy_image(stru->mlx, stru->enemy[1]);
	if (stru->enemy[2])
		mlx_destroy_image(stru->mlx, stru->enemy[2]);
	if (stru->enemy[3])
		mlx_destroy_image(stru->mlx, stru->enemy[3]);
	if (stru->water[0])
		mlx_destroy_image(stru->mlx, stru->water[0]);
	if (stru->water[1])
		mlx_destroy_image(stru->mlx, stru->water[1]);
	if (stru->water[2])
		mlx_destroy_image(stru->mlx, stru->water[2]);
	if (stru->water[3])
		mlx_destroy_image(stru->mlx, stru->water[3]);
	if (stru->water[4])
		mlx_destroy_image(stru->mlx, stru->water[4]);
	if (stru->water[5])
		mlx_destroy_image(stru->mlx, stru->water[5]);
	if (stru->water[6])
		mlx_destroy_image(stru->mlx, stru->water[6]);
	if (stru->water[7])
		mlx_destroy_image(stru->mlx, stru->water[7]);
	image_destroyer11(stru);
}

void	image_destroyer9(t_struct *stru)
{
	if (stru->coin[0])
		mlx_destroy_image(stru->mlx, stru->coin[0]);
	if (stru->coin[1])
		mlx_destroy_image(stru->mlx, stru->coin[1]);
	if (stru->coin[2])
		mlx_destroy_image(stru->mlx, stru->coin[2]);
	if (stru->coin[3])
		mlx_destroy_image(stru->mlx, stru->coin[3]);
	if (stru->coin[4])
		mlx_destroy_image(stru->mlx, stru->coin[4]);
	if (stru->coin[5])
		mlx_destroy_image(stru->mlx, stru->coin[5]);
	if (stru->gcoin[0])
		mlx_destroy_image(stru->mlx, stru->gcoin[0]);
	if (stru->gcoin[1])
		mlx_destroy_image(stru->mlx, stru->gcoin[1]);
	if (stru->gcoin[2])
		mlx_destroy_image(stru->mlx, stru->gcoin[2]);
	if (stru->gcoin[3])
		mlx_destroy_image(stru->mlx, stru->gcoin[3]);
	if (stru->gcoin[4])
		mlx_destroy_image(stru->mlx, stru->gcoin[4]);
	if (stru->gcoin[5])
		mlx_destroy_image(stru->mlx, stru->gcoin[5]);
	image_destroyer10(stru);
}
