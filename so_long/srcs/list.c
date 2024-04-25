/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:46:02 by ade-rese          #+#    #+#             */
/*   Updated: 2024/04/25 13:06:01 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

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
