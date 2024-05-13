/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:15:17 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/06 14:18:05 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	quit(t_struct *stru)
{
	mlx_destroy_image(stru->mlx, stru->img);
	mlx_destroy_window(stru->mlx, stru->mlx_win);
	mlx_destroy_display(stru->mlx);
	free_struct(stru);
	free(stru->mlx);
	exit(1);
}
