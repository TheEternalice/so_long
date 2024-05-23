/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:46:02 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/23 13:42:02 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	init_stru(t_struct *stru)
{
	stru->frames = 0;
	stru->game.coin = 0;
	stru->game.player = 0;
	stru->game.exit = 0;
	stru->game.x = 0;
	stru->game.y = 0;
	stru->game.konami_code = 0;
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
