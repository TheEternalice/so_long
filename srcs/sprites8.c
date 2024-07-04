/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites8.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:59:54 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/04 13:31:44 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	sprites_p4(t_struct *stru)
{
	int	size;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/treant0.xpm", &size, &size);
	if (!stru->player[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/treant1.xpm", &size, &size);
	if (!stru->player[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/treant2.xpm", &size, &size);
	if (!stru->player[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/treant3.xpm", &size, &size);
	if (!stru->player[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_pw4(stru))
		return (1);
	return (0);
}

int	sprites_p3(t_struct *stru)
{
	int	size;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/spider0.xpm", &size, &size);
	if (!stru->player[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/spider1.xpm", &size, &size);
	if (!stru->player[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/spider2.xpm", &size, &size);
	if (!stru->player[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/spider3.xpm", &size, &size);
	if (!stru->player[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_pw3(stru))
		return (1);
	return (0);
}

int	sprites_p2(t_struct *stru)
{
	int	size;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wolf0.xpm", &size, &size);
	if (!stru->player[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wolf1.xpm", &size, &size);
	if (!stru->player[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wolf2.xpm", &size, &size);
	if (!stru->player[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wolf3.xpm", &size, &size);
	if (!stru->player[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_pw2(stru))
		return (1);
	return (0);
}

int	sprites_p1(t_struct *stru)
{
	int	size;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/naga0.xpm", &size, &size);
	if (!stru->player[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/naga1.xpm", &size, &size);
	if (!stru->player[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/naga2.xpm", &size, &size);
	if (!stru->player[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/naga3.xpm", &size, &size);
	if (!stru->player[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_pw1(stru))
		return (1);
	return (0);
}

int	sprites_p0(t_struct *stru)
{
	int	wh;
	int	he;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druid0.xpm", &wh, &he);
	if (!stru->player[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druid1.xpm", &wh, &he);
	if (!stru->player[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druid2.xpm", &wh, &he);
	if (!stru->player[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druid3.xpm", &wh, &he);
	if (!stru->player[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_pw0(stru))
		return (1);
	return (0);
}
