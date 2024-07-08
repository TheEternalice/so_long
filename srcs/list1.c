/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:17:19 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/08 15:28:41 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	null_img_init6(t_struct *stru)
{
	int	i;

	i = 0;
	while (i < 55)
	{
		stru->waka[i] = NULL;
		i++;
	}
	stru->soso = 0;
	stru->coin[0] = NULL;
	stru->coin[1] = NULL;
	stru->coin[2] = NULL;
	stru->coin[3] = NULL;
	stru->coin[4] = NULL;
	stru->coin[5] = NULL;
	stru->select[0] = NULL;
	stru->select[1] = NULL;
	stru->select[2] = NULL;
	stru->select[3] = NULL;
	stru->select[4] = NULL;
	stru->select[5] = NULL;
	stru->select[6] = NULL;
	stru->select[7] = NULL;
	stru->select[8] = NULL;
	null_img_init7(stru);
}

static void	null_img_init5(t_struct *stru)
{
	stru->gcoin[0] = NULL;
	stru->gcoin[1] = NULL;
	stru->gcoin[2] = NULL;
	stru->gcoin[3] = NULL;
	stru->gcoin[4] = NULL;
	stru->gcoin[5] = NULL;
	stru->exit[0] = NULL;
	stru->exit[1] = NULL;
	stru->exit[2] = NULL;
	stru->exit[3] = NULL;
	stru->enemy[0] = NULL;
	stru->enemy[1] = NULL;
	stru->enemy[2] = NULL;
	stru->enemy[3] = NULL;
	stru->player[0] = NULL;
	stru->player[1] = NULL;
	stru->player[2] = NULL;
	stru->player[3] = NULL;
	stru->walk[0] = NULL;
	stru->walk[1] = NULL;
	stru->walk[2] = NULL;
	stru->walk[3] = NULL;
	null_img_init6(stru);
}

static void	null_img_init4(t_struct *stru)
{
	stru->drc[0] = NULL;
	stru->drc[1] = NULL;
	stru->drc[2] = NULL;
	stru->drc[3] = NULL;
	stru->drc[4] = NULL;
	stru->drc[5] = NULL;
	stru->drc[6] = NULL;
	stru->drc[7] = NULL;
	stru->trc[0] = NULL;
	stru->trc[1] = NULL;
	stru->trc[2] = NULL;
	stru->trc[3] = NULL;
	stru->trc[4] = NULL;
	stru->trc[5] = NULL;
	stru->trc[6] = NULL;
	stru->trc[7] = NULL;
	stru->walk[0] = NULL;
	stru->walk[1] = NULL;
	stru->walk[2] = NULL;
	stru->walk[3] = NULL;
	null_img_init5(stru);
}

static void	null_img_init3(t_struct *stru)
{
	stru->o[0] = NULL;
	stru->o[1] = NULL;
	stru->o[2] = NULL;
	stru->o[3] = NULL;
	stru->o[4] = NULL;
	stru->o[5] = NULL;
	stru->o[6] = NULL;
	stru->o[7] = NULL;
	stru->dlc[0] = NULL;
	stru->dlc[1] = NULL;
	stru->dlc[2] = NULL;
	stru->dlc[3] = NULL;
	stru->dlc[4] = NULL;
	stru->dlc[5] = NULL;
	stru->dlc[6] = NULL;
	stru->dlc[7] = NULL;
	stru->tlc[0] = NULL;
	stru->tlc[1] = NULL;
	stru->tlc[2] = NULL;
	stru->tlc[3] = NULL;
	stru->tlc[4] = NULL;
	stru->tlc[5] = NULL;
	stru->tlc[6] = NULL;
	stru->tlc[7] = NULL;
	null_img_init4(stru);
}

void	null_img_init2(t_struct *stru)
{
	stru->ru[0] = NULL;
	stru->ru[1] = NULL;
	stru->ru[2] = NULL;
	stru->ru[3] = NULL;
	stru->ru[4] = NULL;
	stru->ru[5] = NULL;
	stru->ru[6] = NULL;
	stru->ru[7] = NULL;
	stru->c[0] = NULL;
	stru->c[1] = NULL;
	stru->c[2] = NULL;
	stru->c[3] = NULL;
	stru->c[4] = NULL;
	stru->c[5] = NULL;
	stru->c[6] = NULL;
	stru->c[7] = NULL;
	stru->rc[0] = NULL;
	stru->rc[1] = NULL;
	stru->rc[2] = NULL;
	stru->rc[3] = NULL;
	stru->rc[4] = NULL;
	stru->rc[5] = NULL;
	stru->rc[6] = NULL;
	stru->rc[7] = NULL;
	null_img_init3(stru);
}
