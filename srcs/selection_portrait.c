/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_portrait.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:01:17 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 14:24:17 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	init_portrait0(t_struct *stru)
{
	int	size;

	stru->select[0] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/druidselect.xpm", &size, &size);
	if (!stru->select[0])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	stru->select[1] = mlx_xpm_file_to_image(stru->mlx,
			"./sprites/nagaselect.xpm", &size, &size);
	if (!stru->select[1])
		return (write(2, "Error\nmlx file to image fail\n", 29), 1);
	return (0);
}
