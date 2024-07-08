/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites13.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:37:33 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/05 12:13:22 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	sprites_pw11(t_struct *stru)
{
	int	size;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/windw0.xpm", &size, &size);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/windw1.xpm", &size, &size);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/windw2.xpm", &size, &size);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/windw3.xpm", &size, &size);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}

int	sprites_pw10(t_struct *stru)
{
	int	size;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/shamanw0.xpm", &size, &size);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/shamanw1.xpm", &size, &size);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/shamanw2.xpm", &size, &size);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/shamanw3.xpm", &size, &size);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}
