/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:28:08 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/05 12:29:14 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	key_presser(int val, t_struct *stru)
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
	if (val == XK_Return && stru->selected == 0)
	{
		if (loading_sprites(stru))
			quit(stru);
		stru->selected = 1;
	}
	return (0);
}

static void	key_releaser_helper(int val, t_struct *stru)
{
	if (val == XK_Right && stru->selected == 0)
	{
		transparency(stru, stru->black,
			250 + (1920 / 4) * (stru->sarrow % 4) + 130,
			200 + (1150 / 4) * (stru->sarrow / 4) - 30);
		if (stru->sarrow != 11)
			stru->sarrow++;
		else
			stru->sarrow = 0;
	}
	else if (val == XK_Left && stru->selected == 0)
	{
		transparency(stru, stru->black,
			250 + (1920 / 4) * (stru->sarrow % 4) + 130,
			200 + (1150 / 4) * (stru->sarrow / 4) - 30);
		if (stru->sarrow != 0)
			stru->sarrow--;
		else
			stru->sarrow = 11;
	}
}

int	key_releaser(int val, t_struct *stru)
{
	if (val == XK_w)
		stru->game.up = 0;
	if (val == XK_s)
		stru->game.down = 0;
	if (val == XK_a)
		stru->game.left = 0;
	if (val == XK_d)
		stru->game.right = 0;
	key_releaser_helper(val, stru);
	return (0);
}
