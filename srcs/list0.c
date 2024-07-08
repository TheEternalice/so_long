/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:46:02 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/08 12:44:08 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	null_img_init1(t_struct *stru)
{
	stru->tborder[0] = NULL;
	stru->tborder[1] = NULL;
	stru->tborder[2] = NULL;
	stru->tborder[3] = NULL;
	stru->tborder[4] = NULL;
	stru->tborder[5] = NULL;
	stru->tborder[6] = NULL;
	stru->tborder[7] = NULL;
	stru->bborder[0] = NULL;
	stru->bborder[1] = NULL;
	stru->bborder[2] = NULL;
	stru->bborder[3] = NULL;
	stru->bborder[4] = NULL;
	stru->bborder[5] = NULL;
	stru->bborder[6] = NULL;
	stru->bborder[7] = NULL;
	stru->u[0] = NULL;
	stru->u[1] = NULL;
	stru->u[2] = NULL;
	stru->u[3] = NULL;
	stru->u[4] = NULL;
	stru->u[5] = NULL;
	stru->u[6] = NULL;
	stru->u[7] = NULL;
	null_img_init2(stru);
}

static void	null_img_init0(t_struct *stru)
{
	stru->lborder[0] = NULL;
	stru->lborder[1] = NULL;
	stru->lborder[2] = NULL;
	stru->lborder[3] = NULL;
	stru->lborder[4] = NULL;
	stru->lborder[5] = NULL;
	stru->lborder[6] = NULL;
	stru->lborder[7] = NULL;
	stru->water[0] = NULL;
	stru->water[1] = NULL;
	stru->water[2] = NULL;
	stru->water[3] = NULL;
	stru->water[4] = NULL;
	stru->water[5] = NULL;
	stru->water[6] = NULL;
	stru->water[7] = NULL;
	stru->rborder[0] = NULL;
	stru->rborder[1] = NULL;
	stru->rborder[2] = NULL;
	stru->rborder[3] = NULL;
	stru->rborder[4] = NULL;
	stru->rborder[5] = NULL;
	stru->rborder[6] = NULL;
	stru->rborder[7] = NULL;
	null_img_init1(stru);
}

void	init_stru(t_struct *stru)
{
	stru->frames = 0;
	stru->cframes = 0;
	stru->flood.coin = 0;
	stru->flood.exit = 0;
	stru->map = 0;
	stru->flood.map = 0;
	stru->game.coin = 0;
	stru->game.player = 0;
	stru->game.exit = 0;
	stru->game.up = 0;
	stru->game.down = 0;
	stru->game.left = 0;
	stru->game.right = 0;
	stru->game.xp = 0;
	stru->game.yp = 0;
	stru->game.x = 0;
	stru->game.y = 0;
	stru->game.step = 0;
	stru->game.konami_code = 0;
	stru->sentinel.x = 0;
	stru->sentinel.y = 0;
	stru->sentinel.nb_sent = 0;
	stru->canva = NULL;
	stru->floor = NULL;
	null_img_init0(stru);
}

void	free_struct(t_struct *stru)
{
	int	i;

	if (stru->map)
	{
		i = 0;
		while (stru->map[i])
		{
			free(stru->map[i]);
			i++;
		}
		free(stru->map);
	}
	if (stru->flood.map)
	{
		i = 0;
		while (stru->flood.map[i])
		{
			free(stru->flood.map[i]);
			i++;
		}
		free(stru->flood.map);
	}
}

void	exit_free(t_struct *stru, char *message, int num)
{
	free_struct(stru);
	if (stru->sentinel.x)
		free(stru->sentinel.x);
	if (stru->sentinel.y)
		free(stru->sentinel.y);
	write(2, message, ft_strlen(message));
	exit(num);
}
