/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:50:45 by ade-rese          #+#    #+#             */
/*   Updated: 2024/04/19 13:55:24 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	check_error(int argc, char **argv)
{
	if (argc != 2)
		return (write(2, "Invalide number of arguments\n", 29), 1);
	else if (check_extantion(argv))
		return (write(2, "Invalide file name\n", 19), 1);
	return (0);
}
