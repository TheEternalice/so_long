/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:46:10 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/23 13:37:10 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_struct	stru;
	int			wh;
	int			he;

	if (check_error(argc, argv, &stru))
		return (1);
	if (constructor(&stru))
		return (1);
	stru.floor = mlx_xpm_file_to_image(stru.mlx, "./sprites/grass.xpm", &wh, &he);
	if (!stru.floor)
		return (write(2, "mlx file to image fail\n", 23));
	// image_printer(&stru);
	stru.player[0] = mlx_xpm_file_to_image(stru.mlx, "./sprites/druid0.xpm", &wh, &he);
	if (!stru.player[0])
		return (write(2, "mlx file to image fail\n", 23));
	stru.player[1] = mlx_xpm_file_to_image(stru.mlx, "./sprites/druid1.xpm", &wh, &he);
	if (!stru.player[1])
		return (write(2, "mlx file to image fail\n", 23));
	stru.player[2] = mlx_xpm_file_to_image(stru.mlx, "./sprites/druid2.xpm", &wh, &he);
	if (!stru.player[2])
		return (write(2, "mlx file to image fail\n", 23));
	stru.player[3] = mlx_xpm_file_to_image(stru.mlx, "./sprites/druid3.xpm", &wh, &he);
	if (!stru.player[3])
		return (write(2, "mlx file to image fail\n", 23));
	mlx_loop_hook(stru.mlx, &looped, &stru);
	mlx_hook(stru.mlx_win, DestroyNotify, NoEventMask, &quit, &stru);
	mlx_hook(stru.mlx_win, KeyPress, KeyPressMask, &keys, &stru);
	mlx_loop(stru.mlx);
	quit(&stru);
	return (0);
}
