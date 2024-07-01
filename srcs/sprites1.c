/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:33:58 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 12:59:20 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	sprites_environment8(t_struct *stru, int wh, int he)
{
	stru->bborder[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/bborder4.xpm", &wh, &he);
	if (!stru->bborder[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->bborder[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/bborder5.xpm", &wh, &he);
	if (!stru->bborder[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->bborder[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/bborder6.xpm", &wh, &he);
	if (!stru->bborder[6])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->bborder[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/bborder7.xpm", &wh, &he);
	if (!stru->bborder[7])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment9(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment7(t_struct *stru, int wh, int he)
{
	stru->tborder[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tborder7.xpm", &wh, &he);
	if (!stru->tborder[7])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->bborder[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/bborder0.xpm", &wh, &he);
	if (!stru->bborder[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->bborder[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/bborder1.xpm", &wh, &he);
	if (!stru->bborder[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->bborder[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/bborder2.xpm", &wh, &he);
	if (!stru->bborder[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->bborder[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/bborder3.xpm", &wh, &he);
	if (!stru->bborder[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment8(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment6(t_struct *stru, int wh, int he)
{
	stru->tborder[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tborder2.xpm", &wh, &he);
	if (!stru->tborder[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->tborder[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tborder3.xpm", &wh, &he);
	if (!stru->tborder[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->tborder[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tborder4.xpm", &wh, &he);
	if (!stru->tborder[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->tborder[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tborder5.xpm", &wh, &he);
	if (!stru->tborder[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->tborder[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tborder6.xpm", &wh, &he);
	if (!stru->tborder[6])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment7(stru, wh, he))
		return (23);
	return (0);
}

static int	sprites_environment5(t_struct *stru, int wh, int he)
{
	stru->rborder[5] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder5.xpm", &wh, &he);
	if (!stru->rborder[5])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->rborder[6] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder6.xpm", &wh, &he);
	if (!stru->rborder[6])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->rborder[7] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder7.xpm", &wh, &he);
	if (!stru->rborder[7])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->tborder[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tborder0.xpm", &wh, &he);
	if (!stru->tborder[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->tborder[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/tborder1.xpm", &wh, &he);
	if (!stru->tborder[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment6(stru, wh, he))
		return (23);
	return (0);
}

int	sprites_environment4(t_struct *stru, int wh, int he)
{
	stru->rborder[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder0.xpm", &wh, &he);
	if (!stru->rborder[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->rborder[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder1.xpm", &wh, &he);
	if (!stru->rborder[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->rborder[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder2.xpm", &wh, &he);
	if (!stru->rborder[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->rborder[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder3.xpm", &wh, &he);
	if (!stru->rborder[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->rborder[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/rborder4.xpm", &wh, &he);
	if (!stru->rborder[4])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_environment5(stru, wh, he))
		return (23);
	return (0);
}
