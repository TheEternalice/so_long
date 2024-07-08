/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_selection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:26:36 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/05 12:17:07 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	selection_helper(t_struct *stru)
{
	transparency(stru, stru->select[6],
		250 + (1920 / 4) * 2 - 128, 200 + (1150 / 4) * 1 - 128);
	transparency(stru, stru->select[7],
		250 + (1920 / 4) * 3 - 128, 200 + (1150 / 4) * 1 - 128);
	transparency(stru, stru->select[8],
		250 + (1920 / 4) * 0 - 128, 200 + (1150 / 4) * 2 - 128);
	transparency(stru, stru->select[9],
		250 + (1920 / 4) * 1 - 128, 200 + (1150 / 4) * 2 - 128);
	transparency(stru, stru->select[10],
		250 + (1920 / 4) * 2 - 128, 200 + (1150 / 4) * 2 - 128);
	transparency(stru, stru->select[11],
		250 + (1920 / 4) * 3 - 128, 200 + (1150 / 4) * 2 - 128);
}

int	selection(t_struct *stru)
{
	transparency(stru, stru->select[0],
		250 + (1920 / 4) * 0 - 128, 200 + (1150 / 4) * 0 - 128);
	transparency(stru, stru->select[1],
		250 + (1920 / 4) * 1 - 128, 200 + (1150 / 4) * 0 - 128);
	transparency(stru, stru->select[2],
		250 + (1920 / 4) * 2 - 128, 200 + (1150 / 4) * 0 - 128);
	transparency(stru, stru->select[3],
		250 + (1920 / 4) * 3 - 128, 200 + (1150 / 4) * 0 - 128);
	transparency(stru, stru->select[4],
		250 + (1920 / 4) * 0 - 128, 200 + (1150 / 4) * 1 - 128);
	transparency(stru, stru->select[5],
		250 + (1920 / 4) * 1 - 128, 200 + (1150 / 4) * 1 - 128);
	selection_helper(stru);
	transparency(stru, stru->black,
		250 + (1920 / 4) * (stru->sarrow % 4) + 130,
		200 + (1150 / 4) * (stru->sarrow / 4) - 30);
	transparency(stru, stru->arrow[stru->frames % 5],
		250 + (1920 / 4) * (stru->sarrow % 4) + 130,
		200 + (1150 / 4) * (stru->sarrow / 4) - 30);
	return (stru->selected);
}
