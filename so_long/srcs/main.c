/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:46:10 by ade-rese          #+#    #+#             */
/*   Updated: 2024/04/30 11:34:58 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_struct	stru;
	int			wh;
	int			he;

	if (check_error(argc, argv))
		return (1);
	if (map_open(argv[1], &stru))
		return (free(stru.map), write(2, "Error dir found or no map\n", 27), 1);
	if (is_rectangle(&stru) || is_close(&stru))
		exit_free(&stru, "Invalide map\n", 1);
	if (check_args(&stru))
		exit_free(&stru, "Invalide map arg\n", 1);
	stru.mlx = mlx_init();
	if (!stru.mlx)
		return (write(2, "mlx fail to init\n", 17), 1);
	stru.mlx_win = mlx_new_window(stru.mlx, 128, 128, "test");
	if (!stru.mlx_win)
		return (write(2, "mlx new window fail\n", 20));
	stru.img = mlx_xpm_file_to_image(stru.mlx, "./textures/bleu.xpm", &wh, &he);
	if (!stru.img)
		return (write(2, "mlx file to image fail\n", 23));
	mlx_put_image_to_window(stru.mlx, stru.mlx_win, stru.img, 0, 0);
	sleep(3);
	mlx_destroy_image(stru.mlx, stru.img);
	stru.img = mlx_xpm_file_to_image(stru.mlx, "./textures/sprite_druid_64x64.xpm", &wh, &he);
	if (!stru.img)
		return (write(2, "mlx file to image fail\n", 23));
	mlx_put_image_to_window(stru.mlx, stru.mlx_win, stru.img, 0, 0);
	sleep(3);
	mlx_destroy_image(stru.mlx, stru.img);
	mlx_destroy_window(stru.mlx, stru.mlx_win);
	mlx_destroy_display(stru.mlx);
	free(stru.mlx);
	return (0);
}
