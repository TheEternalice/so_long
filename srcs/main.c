/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:46:10 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/27 15:26:04 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_struct	stru;

	if (check_error(argc, argv, &stru))
		return (1);
	if (constructor(&stru))
		return (1);
	if (sprites0(&stru))
		return (1);
	stru.start = clock();
	mlx_loop_hook(stru.mlx, &looped, &stru);
	mlx_hook(stru.mlx_win, DestroyNotify, NoEventMask, &quit, &stru);
	mlx_hook(stru.mlx_win, KeyPress, KeyPressMask, &keys, &stru);
	mlx_loop(stru.mlx);
	quit(&stru);
	return (0);
}
