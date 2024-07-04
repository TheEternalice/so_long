/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites12.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:34:17 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/04 13:36:51 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	sprites_pw9(t_struct *stru)
{
	int	size;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/paladinw0.xpm", &size, &size);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/paladinw1.xpm", &size, &size);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/paladinw2.xpm", &size, &size);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/paladinw3.xpm", &size, &size);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}

int	sprites_pw8(t_struct *stru)
{
	int	size;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/hunterw0.xpm", &size, &size);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/hunterw1.xpm", &size, &size);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/hunterw2.xpm", &size, &size);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/hunterw3.xpm", &size, &size);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}

int	sprites_pw7(t_struct *stru)
{
	int	size;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/fairyw0.xpm", &size, &size);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/fairyw1.xpm", &size, &size);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/fairyw2.xpm", &size, &size);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/fairyw3.xpm", &size, &size);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}

int	sprites_pw6(t_struct *stru)
{
	int	size;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/cyclopw0.xpm", &size, &size);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/cyclopw1.xpm", &size, &size);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/cyclopw2.xpm", &size, &size);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/cyclopw3.xpm", &size, &size);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}

int	sprites_pw5(t_struct *stru)
{
	int	size;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/archerw0.xpm", &size, &size);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/archerw1.xpm", &size, &size);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/archerw2.xpm", &size, &size);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/archerw3.xpm", &size, &size);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}
