/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites7.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:39:57 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 13:49:41 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	soso(t_struct *stru, int wh, int he)
{
	stru->soso = mlx_xpm_file_to_image(stru->mlx, "./sprites/soso.xpm",
			&wh, &he);
	if (!stru->soso)
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	return (0);
}

static int	waka1(t_struct *stru, char *img_name, int i)
{
	int		size;

	stru->waka[i] = mlx_xpm_file_to_image(stru->mlx,
			img_name, &size, &size);
	if (!stru->waka[i])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	return (0);
}

int	waka0(t_struct *stru)
{
	char	img_name[128];
	int		i;

	i = 0;
	while (i < 55)
	{
		strcpy(img_name, "./sprites/waka");
		if (i >= 10)
		{
			img_name[14] = '0' + (i / 10);
			img_name[15] = '0' + (i % 10);
			img_name[16] = '\0';
		}
		else
		{
			img_name[14] = '0' + i;
			img_name[15] = '\0';
		}
		strcat(img_name, ".xpm");
		if (waka1(stru, img_name, i))
			return (1);
		++i;
	}
	return (0);
}

int	sprites_enemy0(t_struct *stru)
{
	int	wh;
	int	he;

	stru->enemy[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/enemy0.xpm", &wh, &he);
	if (!stru->enemy[0])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->enemy[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/enemy1.xpm", &wh, &he);
	if (!stru->enemy[1])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->enemy[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/enemy2.xpm", &wh, &he);
	if (!stru->enemy[2])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	stru->enemy[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/enemy3.xpm", &wh, &he);
	if (!stru->enemy[3])
		return (write(2, "Error\nmlx file to image fail\n", 29));
	if (waka0(stru))
		return (1);
	if (soso(stru, wh, he))
		return (1);
	return (0);
}
