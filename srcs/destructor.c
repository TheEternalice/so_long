/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:15:17 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/23 13:37:47 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	quit(t_struct *stru)
{
	mlx_destroy_image(stru->mlx, stru->player[0]);
	mlx_destroy_image(stru->mlx, stru->player[1]);
	mlx_destroy_image(stru->mlx, stru->player[2]);
	mlx_destroy_image(stru->mlx, stru->player[3]);
	mlx_destroy_image(stru->mlx, stru->canva);
	mlx_destroy_image(stru->mlx, stru->floor);
	mlx_destroy_window(stru->mlx, stru->mlx_win);
	mlx_destroy_display(stru->mlx);
	free_struct(stru);
	free(stru->mlx);
	exit(1);
}
