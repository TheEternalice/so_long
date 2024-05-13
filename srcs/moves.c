/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:15:44 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/13 12:43:47 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	keys(int val, t_struct *stru)
{
	if (val == XK_Escape)
		quit(stru);
	if (stru->game.konami_code == 0)
		easter_egg(val, stru);
	return (0);
}

static void	easter_egg_helper(int val, int counter[11], t_struct *stru)
{
	if (counter[4] == 1 && val == XK_Right && counter[5] == 0)
		counter[5] = 1;
	else if (counter[5] == 1 && val == XK_Left && counter[6] == 0)
		counter[6] = 1;
	else if (counter[6] == 1 && val == XK_Right && counter[7] == 0)
		counter[7] = 1;
	else if (counter[7] == 1 && val == XK_b && counter[8] == 0)
		counter[8] = 1;
	else if (counter[8] == 1 && val == XK_a && counter[9] == 0)
		counter[9] = 1;
	else if (counter[9] == 1 && val == XK_Return)
		stru->game.konami_code = 1;
}

void	easter_egg(int val, t_struct *stru)
{
	static int	counter[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int			i;

	i = 0;
	if (val == XK_Up && counter[0] == 0)
		counter[0] = 1;
	else if (counter[0] == 1 && val == XK_Up && counter[1] == 0)
		counter[1] = 1;
	else if (counter[1] == 1 && val == XK_Down && counter[2] == 0)
		counter[2] = 1;
	else if (counter[2] == 1 && val == XK_Down && counter[3] == 0)
		counter[3] = 1;
	else if (counter[3] == 1 && val == XK_Left && counter[4] == 0)
		counter[4] = 1;
	else if (counter[4] == 1)
		easter_egg_helper(val, counter, stru);
	else
	{
		while (counter[i])
		{
			counter[i] = 0;
			i++;
		}
	}
}
