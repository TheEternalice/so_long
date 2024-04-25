/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:50:45 by ade-rese          #+#    #+#             */
/*   Updated: 2024/04/25 15:08:06 by ade-rese         ###   ########.fr       */
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

int	is_rectangle(t_struct *stru)
{
	int	i;
	int	j;
	int	leni;
	int	lenj;

	i = 0;
	j = 1;
	while (stru->map[i] && stru->map[j])
	{
		leni = ft_strlen(stru->map[i]);
		lenj = ft_strlen(stru->map[j]);
		if (stru->map[i][leni] != stru->map[j][lenj])
			return (1);
		i++;
		j++;
	}
	return (0);
}

// static int	is_validarg(char c)
// {
// 	return (c == '0' || c == '1' || c == 'P' || c == 'C' || c == 'E');
// }

// void	flood_fill()
// {
	
// }
