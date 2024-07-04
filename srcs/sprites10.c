/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:22:57 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/04 13:33:14 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	sprites_p11(t_struct *stru)
{
	int	size;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wind0.xpm", &size, &size);
	if (!stru->player[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wind1.xpm", &size, &size);
	if (!stru->player[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wind2.xpm", &size, &size);
	if (!stru->player[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wind3.xpm", &size, &size);
	if (!stru->player[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_pw11(stru))
		return (1);
	return (0);
}

int	sprites_p10(t_struct *stru)
{
	int	size;

	stru->player[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/shaman0.xpm", &size, &size);
	if (!stru->player[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/shaman1.xpm", &size, &size);
	if (!stru->player[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/shaman2.xpm", &size, &size);
	if (!stru->player[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->player[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/shaman3.xpm", &size, &size);
	if (!stru->player[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (sprites_pw10(stru))
		return (1);
	return (0);
}
