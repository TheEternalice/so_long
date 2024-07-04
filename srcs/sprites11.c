/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites11.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:26:16 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/04 13:31:41 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	sprites_pw4(t_struct *stru)
{
	int	size;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/treantw0.xpm", &size, &size);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/treantw1.xpm", &size, &size);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/treantw2.xpm", &size, &size);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/treantw3.xpm", &size, &size);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}

int	sprites_pw3(t_struct *stru)
{
	int	size;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/spiderw0.xpm", &size, &size);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/spiderw1.xpm", &size, &size);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/spiderw2.xpm", &size, &size);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/spiderw3.xpm", &size, &size);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}

int	sprites_pw2(t_struct *stru)
{
	int	size;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wolfw0.xpm", &size, &size);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wolfw1.xpm", &size, &size);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wolfw2.xpm", &size, &size);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/wolfw3.xpm", &size, &size);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}

int	sprites_pw1(t_struct *stru)
{
	int	size;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/nagaw0.xpm", &size, &size);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/nagaw1.xpm", &size, &size);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/nagaw2.xpm", &size, &size);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/nagaw3.xpm", &size, &size);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}

int	sprites_pw0(t_struct *stru)
{
	int	wh;
	int	he;

	stru->walk[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druidw0.xpm", &wh, &he);
	if (!stru->walk[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druidw1.xpm", &wh, &he);
	if (!stru->walk[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druidw2.xpm", &wh, &he);
	if (!stru->walk[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->walk[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druidw3.xpm", &wh, &he);
	if (!stru->walk[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	return (0);
}
