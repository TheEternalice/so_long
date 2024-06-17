/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps_drawer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:25:56 by ade-rese          #+#    #+#             */
/*   Updated: 2024/06/17 13:38:04 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	steps_printer(t_struct *stru, int nb, int x, int y)
{
	if (nb == 0)
		transparency(stru, stru->step[0], x, y);
	else if (nb == 1)
		transparency(stru, stru->step[1], x, y);
	else if (nb == 2)
		transparency(stru, stru->step[2], x, y);
	else if (nb == 3)
		transparency(stru, stru->step[3], x, y);
	else if (nb == 4)
		transparency(stru, stru->step[4], x, y);
	else if (nb == 5)
		transparency(stru, stru->step[5], x, y);
	else if (nb == 6)
		transparency(stru, stru->step[6], x, y);
	else if (nb == 7)
		transparency(stru, stru->step[7], x, y);
	else if (nb == 8)
		transparency(stru, stru->step[8], x, y);
	else if (nb == 9)
		transparency(stru, stru->step[9], x, y);
}

void	itow(t_struct *stru, int nb, int x, int y)
{
	int	d;
	int	i;

	if (nb / 10)
	{
		i = 0;
		d = nb;
		while (d >= 10)
		{
			d = d / 10;
			i++;
		}
		steps_printer(stru, nb % 10, x + (i * 48), y);
		itow(stru, nb / 10, x, y);
	}
	else
		steps_printer(stru, nb, x, y);
}
