/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:46:02 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/04 13:42:28 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	null_img_init(t_struct *stru)
{
	stru->lborder[0] = NULL;
	stru->lborder[1] = NULL;
	stru->lborder[2] = NULL;
	stru->lborder[3] = NULL;
	stru->lborder[4] = NULL;
	stru->lborder[5] = NULL;
	stru->lborder[6] = NULL;
	stru->lborder[7] = NULL;
	stru->rborder[0] = NULL;
	stru->rborder[1] = NULL;
	stru->rborder[2] = NULL;
	stru->rborder[3] = NULL;
	stru->rborder[4] = NULL;
	stru->rborder[5] = NULL;
	stru->rborder[6] = NULL;
	stru->rborder[7] = NULL;
	stru->water[0] = NULL;
	stru->water[1] = NULL;
	stru->water[2] = NULL;
	stru->water[3] = NULL;
	stru->water[4] = NULL;
	stru->water[5] = NULL;
	stru->water[6] = NULL;
	stru->water[7] = NULL;
}

void	init_stru(t_struct *stru)
{
	stru->frames = 0;
	stru->game.coin = 0;
	stru->game.player = 0;
	stru->game.exit = 0;
	stru->game.x = 0;
	stru->game.y = 0;
	stru->game.konami_code = 0;
	stru->canva = NULL;
	stru->floor = NULL;
	null_img_init(stru);
}

void	free_struct(t_struct *stru)
{
	int	i;

	i = 0;
	if (stru->map)
	{
		while (stru->map[i])
		{
			free(stru->map[i]);
			i++;
		}
		free(stru->map);
	}
}

void	exit_free(t_struct *stru, char *message, int num)
{
	free_struct(stru);
	write(2, message, ft_strlen(message));
	exit(num);
}
