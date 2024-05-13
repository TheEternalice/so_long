/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:46:10 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/08 14:52:27 by ade-rese         ###   ########.fr       */
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
	stru.img = mlx_xpm_file_to_image(stru.mlx, "./sprites/grass.xpm", &wh, &he);
	if (!stru.img)
		return (write(2, "mlx file to image fail\n", 23));
	int	i;
	int	j = 0;
	while (j < stru.game.y)
	{
		i = 0;
		while (i < stru.game.x)
		{
			mlx_put_image_to_window(stru.mlx, stru.mlx_win, stru.img, i * 64, j * 64);
			i++;
		}
		j++;
	}
	mlx_destroy_image(stru.mlx, stru.img);
	stru.img = mlx_xpm_file_to_image(stru.mlx, "./sprites/druid0.xpm", &wh, &he);
	if (!stru.img)
		return (write(2, "mlx file to image fail\n", 23));
	mlx_put_image_to_window(stru.mlx, stru.mlx_win, stru.img, 0, 0);
	mlx_hook(stru.mlx_win, DestroyNotify, NoEventMask, &quit, &stru);
	mlx_hook(stru.mlx_win, KeyPress, KeyPressMask, &keys, &stru);
	mlx_loop(stru.mlx);
	quit(&stru);
	return (0);
}
