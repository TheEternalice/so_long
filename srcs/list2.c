/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:15:00 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/08 15:30:30 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	null_img_init7(t_struct *stru)
{
	stru->select[9] = NULL;
	stru->select[10] = NULL;
	stru->select[11] = NULL;
	stru->arrow[0] = NULL;
	stru->arrow[1] = NULL;
	stru->arrow[2] = NULL;
	stru->arrow[3] = NULL;
	stru->arrow[4] = NULL;
	stru->sarrow = 0;
	stru->selected = 0;
	stru->black = 0;
	stru->step[0] = 0;
	stru->step[1] = 0;
	stru->step[2] = 0;
	stru->step[3] = 0;
	stru->step[4] = 0;
	stru->step[5] = 0;
	stru->step[6] = 0;
	stru->step[7] = 0;
	stru->step[8] = 0;
	stru->step[9] = 0;
}
