/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:15:07 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/08 11:33:53 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	constructor(t_struct *stru)
{
	stru->mlx = mlx_init();
	if (!stru->mlx)
		return (write(2, "mlx fail to init\n", 17), 1);
	stru->mlx_win = mlx_new_window(stru->mlx, stru->game.x * 64,
			stru->game.y * 64, "so_long");
	if (!stru->mlx_win)
		return (write(2, "mlx new window fail\n", 20));
	return (0);
}
