/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:15:07 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/23 13:32:49 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	constructor(t_struct *stru)
{
	stru->mlx = mlx_init();
	if (!stru->mlx)
		return (write(2, "mlx fail to init\n", 17), 1);
	stru->mlx_win = mlx_new_window(stru->mlx, (stru->game.x + 1) * 64,
			(stru->game.y + 1) * 64, "so_long");
	if (!stru->mlx_win)
		return (write(2, "mlx new window fail\n", 20), 1);
	stru->canva = mlx_new_image(stru->mlx, (stru->game.x + 1) * 64,
			(stru->game.y + 1) * 64);
	if (!stru->canva)
		return (write(2, "Fail to creat new image for canva\n", 34), 1);
	return (0);
}
