/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites9.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:19:54 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/04 13:33:05 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	sprites_p9(t_struct *stru)
{
	int	size;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/paladin0.xpm", &size, &size);
	if (!stru->player[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/paladin1.xpm", &size, &size);
	if (!stru->player[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/paladin2.xpm", &size, &size);
	if (!stru->player[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/paladin3.xpm", &size, &size);
	if (!stru->player[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_pw9(stru))
		return (1);
	return (0);
}

int	sprites_p8(t_struct *stru)
{
	int	size;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/hunter0.xpm", &size, &size);
	if (!stru->player[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/hunter1.xpm", &size, &size);
	if (!stru->player[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/hunter2.xpm", &size, &size);
	if (!stru->player[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/hunter3.xpm", &size, &size);
	if (!stru->player[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_pw8(stru))
		return (1);
	return (0);
}

int	sprites_p7(t_struct *stru)
{
	int	size;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/fairy0.xpm", &size, &size);
	if (!stru->player[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/fairy1.xpm", &size, &size);
	if (!stru->player[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/fairy2.xpm", &size, &size);
	if (!stru->player[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/fairy3.xpm", &size, &size);
	if (!stru->player[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_pw7(stru))
		return (1);
	return (0);
}

int	sprites_p6(t_struct *stru)
{
	int	size;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/cyclop0.xpm", &size, &size);
	if (!stru->player[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/cyclop1.xpm", &size, &size);
	if (!stru->player[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/cyclop2.xpm", &size, &size);
	if (!stru->player[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/cyclop3.xpm", &size, &size);
	if (!stru->player[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_pw6(stru))
		return (1);
	return (0);
}

int	sprites_p5(t_struct *stru)
{
	int	size;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/archer0.xpm", &size, &size);
	if (!stru->player[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/archer1.xpm", &size, &size);
	if (!stru->player[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/archer2.xpm", &size, &size);
	if (!stru->player[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/archer3.xpm", &size, &size);
	if (!stru->player[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_pw5(stru))
		return (1);
	return (0);
}
