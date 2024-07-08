/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites14.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:13:46 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/05 12:15:26 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	loading_sprites_helper(t_struct *stru)
{
	if (stru->sarrow == 6)
		if (sprites_p6(stru))
			quit(stru);
	if (stru->sarrow == 7)
		if (sprites_p7(stru))
			quit(stru);
	if (stru->sarrow == 8)
		if (sprites_p8(stru))
			quit(stru);
	if (stru->sarrow == 9)
		if (sprites_p9(stru))
			quit(stru);
	if (stru->sarrow == 10)
		if (sprites_p10(stru))
			quit(stru);
	if (stru->sarrow == 11)
		if (sprites_p11(stru))
			quit(stru);
}

int	loading_sprites(t_struct *stru)
{
	if (stru->sarrow == 0)
		if (sprites_p0(stru))
			quit(stru);
	if (stru->sarrow == 1)
		if (sprites_p1(stru))
			quit(stru);
	if (stru->sarrow == 2)
		if (sprites_p2(stru))
			quit(stru);
	if (stru->sarrow == 3)
		if (sprites_p3(stru))
			quit(stru);
	if (stru->sarrow == 4)
		if (sprites_p4(stru))
			quit(stru);
	if (stru->sarrow == 5)
		if (sprites_p5(stru))
			quit(stru);
	loading_sprites_helper(stru);
	return (0);
}

static int	init_arrow_helper(t_struct *stru)
{
	int	size;

	stru->black = mlx_xpm_file_to_image(stru->mlx, "./sprites/black.xpm",
			&size, &size);
	if (!stru->black)
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	return (0);
}

int	init_arrow(t_struct *stru)
{
	int	size;

	stru->arrow[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/arrow0.xpm", &size, &size);
	if (!stru->arrow[0])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->arrow[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/arrow1.xpm", &size, &size);
	if (!stru->arrow[1])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->arrow[2] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/arrow2.xpm", &size, &size);
	if (!stru->arrow[2])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->arrow[3] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/arrow3.xpm", &size, &size);
	if (!stru->arrow[3])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->arrow[4] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/arrow4.xpm", &size, &size);
	if (!stru->arrow[4])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	if (init_arrow_helper(stru))
		return (1);
	return (0);
}
