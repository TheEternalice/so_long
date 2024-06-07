/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:11:02 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/07 14:19:13 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	sprites_environment23(t_struct *stru, int wh, int he)
{
	stru->trc[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/trc4.xpm", &wh, &he);
	if (!stru->trc[4])
		return (write(2, "mlx file to image fail\n", 23));
	stru->trc[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/trc5.xpm", &wh, &he);
	if (!stru->trc[5])
		return (write(2, "mlx file to image fail\n", 23));
	stru->trc[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/trc6.xpm", &wh, &he);
	if (!stru->trc[6])
		return (write(2, "mlx file to image fail\n", 23));
	stru->trc[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/trc7.xpm", &wh, &he);
	if (!stru->trc[7])
		return (write(2, "mlx file to image fail\n", 23));
	return (0);
}

static int	sprites_environment22(t_struct *stru, int wh, int he)
{
	stru->drc[7] = mlx_xpm_file_to_image(stru->mlx, "./sprites/drc7.xpm", &wh, &he);
	if (!stru->drc[7])
		return (write(2, "mlx file to image fail\n", 23));
	stru->trc[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/trc0.xpm", &wh, &he);
	if (!stru->trc[0])
		return (write(2, "mlx file to image fail\n", 23));
	stru->trc[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/trc1.xpm", &wh, &he);
	if (!stru->trc[1])
		return (write(2, "mlx file to image fail\n", 23));
	stru->trc[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/trc2.xpm", &wh, &he);
	if (!stru->trc[2])
		return (write(2, "mlx file to image fail\n", 23));
	stru->trc[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/trc3.xpm", &wh, &he);
	if (!stru->trc[3])
		return (write(2, "mlx file to image fail\n", 23));
	if (sprites_environment23(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment21(t_struct *stru, int wh, int he)
{
	stru->drc[2] = mlx_xpm_file_to_image(stru->mlx, "./sprites/drc2.xpm", &wh, &he);
	if (!stru->drc[2])
		return (write(2, "mlx file to image fail\n", 23));
	stru->drc[3] = mlx_xpm_file_to_image(stru->mlx, "./sprites/drc3.xpm", &wh, &he);
	if (!stru->drc[3])
		return (write(2, "mlx file to image fail\n", 23));
	stru->drc[4] = mlx_xpm_file_to_image(stru->mlx, "./sprites/drc4.xpm", &wh, &he);
	if (!stru->drc[4])
		return (write(2, "mlx file to image fail\n", 23));
	stru->drc[5] = mlx_xpm_file_to_image(stru->mlx, "./sprites/drc5.xpm", &wh, &he);
	if (!stru->drc[5])
		return (write(2, "mlx file to image fail\n", 23));
	stru->drc[6] = mlx_xpm_file_to_image(stru->mlx, "./sprites/drc6.xpm", &wh, &he);
	if (!stru->drc[6])
		return (write(2, "mlx file to image fail\n", 23));
	if (sprites_environment22(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment20(t_struct *stru, int wh, int he)
{
	stru->tlc[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tlc5.xpm", &wh, &he);
	if (!stru->tlc[5])
		return (write(2, "mlx file to image fail\n", 23));
	stru->tlc[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tlc6.xpm", &wh, &he);
	if (!stru->tlc[6])
		return (write(2, "mlx file to image fail\n", 23));
	stru->tlc[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tlc7.xpm", &wh, &he);
	if (!stru->tlc[7])
		return (write(2, "mlx file to image fail\n", 23));
	stru->drc[0] = mlx_xpm_file_to_image(stru->mlx, "./sprites/drc0.xpm", &wh, &he);
	if (!stru->drc[0])
		return (write(2, "mlx file to image fail\n", 23));
	stru->drc[1] = mlx_xpm_file_to_image(stru->mlx, "./sprites/drc1.xpm", &wh, &he);
	if (!stru->drc[1])
		return (write(2, "mlx file to image fail\n", 23));
	if (sprites_environment21(stru, wh, he))
		return (23);
	return (0);
}

int	sprites_environment19(t_struct *stru, int wh, int he)
{
	stru->tlc[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tlc0.xpm", &wh, &he);
	if (!stru->tlc[0])
		return (write(2, "mlx file to image fail\n", 23));
	stru->tlc[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tlc1.xpm", &wh, &he);
	if (!stru->tlc[1])
		return (write(2, "mlx file to image fail\n", 23));
	stru->tlc[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tlc2.xpm", &wh, &he);
	if (!stru->tlc[2])
		return (write(2, "mlx file to image fail\n", 23));
	stru->tlc[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tlc3.xpm", &wh, &he);
	if (!stru->tlc[3])
		return (write(2, "mlx file to image fail\n", 23));
	stru->tlc[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tlc4.xpm", &wh, &he);
	if (!stru->tlc[4])
		return (write(2, "mlx file to image fail\n", 23));
	if (sprites_environment20(stru, wh, he))
		return (23);
	return (0);
}
