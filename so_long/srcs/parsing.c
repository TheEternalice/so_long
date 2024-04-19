/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:48:13 by ade-rese          #+#    #+#             */
/*   Updated: 2024/04/19 13:56:07 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	check_extantion(char **argv)
{
	int	i;

	i = ft_strlen(argv[1]) - 4;
	if (!ft_strncmp(&argv[1][i], ".ber", 4))
		return (0);
	return (1);
}
