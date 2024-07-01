/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:41:43 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 12:59:32 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	sprites_environment13(t_struct *stru, int wh, int he)
{
	stru->c[4] = mlx_xpm_file_to_image(stru->mlx, "./sprites/C4.xpm", &wh, &he);
	if (!stru->c[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->c[5] = mlx_xpm_file_to_image(stru->mlx, "./sprites/C5.xpm", &wh, &he);
	if (!stru->c[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->c[6] = mlx_xpm_file_to_image(stru->mlx, "./sprites/C6.xpm", &wh, &he);
	if (!stru->c[6])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->c[7] = mlx_xpm_file_to_image(stru->mlx, "./sprites/C7.xpm", &wh, &he);
	if (!stru->c[7])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment14(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment12(t_struct *stru, int wh, int he)
{
	stru->ru[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RU7.xpm", &wh, &he);
	if (!stru->ru[7])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->c[0] = mlx_xpm_file_to_image(stru->mlx, "./sprites/C0.xpm", &wh, &he);
	if (!stru->c[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->c[1] = mlx_xpm_file_to_image(stru->mlx, "./sprites/C1.xpm", &wh, &he);
	if (!stru->c[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->c[2] = mlx_xpm_file_to_image(stru->mlx, "./sprites/C2.xpm", &wh, &he);
	if (!stru->c[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->c[3] = mlx_xpm_file_to_image(stru->mlx, "./sprites/C3.xpm", &wh, &he);
	if (!stru->c[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment13(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment11(t_struct *stru, int wh, int he)
{
	stru->ru[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RU2.xpm", &wh, &he);
	if (!stru->ru[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->ru[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RU3.xpm", &wh, &he);
	if (!stru->ru[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->ru[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RU4.xpm", &wh, &he);
	if (!stru->ru[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->ru[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RU5.xpm", &wh, &he);
	if (!stru->ru[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->ru[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RU6.xpm", &wh, &he);
	if (!stru->ru[6])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment12(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment10(t_struct *stru, int wh, int he)
{
	stru->u[5] = mlx_xpm_file_to_image(stru->mlx, "./sprites/U5.xpm", &wh, &he);
	if (!stru->u[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->u[6] = mlx_xpm_file_to_image(stru->mlx, "./sprites/U6.xpm", &wh, &he);
	if (!stru->u[6])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->u[7] = mlx_xpm_file_to_image(stru->mlx, "./sprites/U7.xpm", &wh, &he);
	if (!stru->u[7])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->ru[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RU0.xpm", &wh, &he);
	if (!stru->ru[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->ru[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/RU1.xpm", &wh, &he);
	if (!stru->ru[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment11(stru, wh, he))
		return (23);
	return (0);
}

int	sprites_environment9(t_struct *stru, int wh, int he)
{
	stru->u[0] = mlx_xpm_file_to_image(stru->mlx, "./sprites/U0.xpm", &wh, &he);
	if (!stru->u[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->u[1] = mlx_xpm_file_to_image(stru->mlx, "./sprites/U1.xpm", &wh, &he);
	if (!stru->u[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->u[2] = mlx_xpm_file_to_image(stru->mlx, "./sprites/U2.xpm", &wh, &he);
	if (!stru->u[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->u[3] = mlx_xpm_file_to_image(stru->mlx, "./sprites/U3.xpm", &wh, &he);
	if (!stru->u[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->u[4] = mlx_xpm_file_to_image(stru->mlx, "./sprites/U4.xpm", &wh, &he);
	if (!stru->u[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment10(stru, wh, he))
		return (23);
	return (0);
}
