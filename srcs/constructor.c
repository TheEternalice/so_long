/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:15:07 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/01 15:40:51 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	constructor(t_struct *stru)
{
	stru->mlx = mlx_init();
	if (!stru->mlx)
		return (write(2, "Error\nmlx fail to init\n", 23), 1);
	stru->mlx_win = mlx_new_window(stru->mlx, CAM_LEN,
			CAM_WIDHT, "so_long");
	if (!stru->mlx_win)
		return (write(2, "Error\nmlx new window fail\n", 26), 1);
	stru->canva = mlx_new_image(stru->mlx, CAM_LEN,
			CAM_WIDHT);
	if (!stru->canva)
		return (write(2, "Error\nFail to creat new image for canva\n", 40), 1);
	return (0);
}

int	sprites_init(t_struct *stru)
{
	if (init_portrait0(stru))
		return (1);
	if (sprites_environment0(stru))
		return (1);
	if (sprites_p0(stru))
		return (1);
	if (sprites_pw0(stru))
		return (1);
	if (sprites_c0(stru))
		return (1);
	if (sprites_e(stru))
		return (1);
	if (sprites_gc0(stru))
		return (1);
	if (sprites_enemy0(stru))
		return (1);
	if (init_arrow(stru))
		return (1);
	return (0);
}
