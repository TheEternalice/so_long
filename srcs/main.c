/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:46:10 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/27 10:29:38 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	frames(t_struct *stru)
{
	keys(stru);
	if (stru->frames == 18 || stru->frames == 36 || stru->frames == 54)
		coordonate(stru);
	image_printer(stru);
	if (!stru->game.up && !stru->game.down && !stru->game.right
		&& !stru->game.left)
		transparency(stru, stru->player[stru->frames % 4],
			stru->game.xp, stru->game.yp);
	else
	{
		collision(stru);
		transparency(stru, stru->walk[stru->frames % 4],
			stru->game.xp, stru->game.yp);
	}
	stru->frames++;
	if (stru->frames > 55)
		stru->frames = 0;
	mlx_put_image_to_window(stru->mlx, stru->mlx_win, stru->canva, 0, 0);
	collision_enemy(stru);
	stru->start = clock();
}

int	looped(t_struct *stru)
{
	unsigned long	millis;

	stru->end = clock();
	millis = (stru->end - stru->start) * 1000 / CLOCKS_PER_SEC;
	if (millis >= 55)
		frames(stru);
	return (0);
}

static int	key_presser(int val, t_struct *stru)
{
	if (val == XK_Escape)
		quit(stru);
	if (stru->game.konami_code == 0)
		easter_egg(val, stru);
	if (val == XK_w)
		stru->game.up = 1;
	if (val == XK_s)
		stru->game.down = 1;
	if (val == XK_a)
		stru->game.left = 1;
	if (val == XK_d)
		stru->game.right = 1;
	return (0);
}

static int	key_releaser(int val, t_struct *stru)
{
	if (val == XK_w)
		stru->game.up = 0;
	if (val == XK_s)
		stru->game.down = 0;
	if (val == XK_a)
		stru->game.left = 0;
	if (val == XK_d)
		stru->game.right = 0;
	return (0);
}

int	main(int argc, char **argv)
{
	t_struct	stru;

	init_stru(&stru);
	if (check_error(argc, argv, &stru))
		return (1);
	if (constructor(&stru))
		return (1);
	if (sprites_init(&stru))
		return (1);
	stru.start = clock();
	mlx_loop_hook(stru.mlx, &looped, &stru);
	mlx_hook(stru.mlx_win, DestroyNotify, NoEventMask, &quit, &stru);
	mlx_hook(stru.mlx_win, KeyPress, KeyPressMask, &key_presser, &stru);
	mlx_hook(stru.mlx_win, KeyRelease, KeyReleaseMask, &key_releaser, &stru);
	mlx_loop(stru.mlx);
	quit(&stru);
	return (0);
}
