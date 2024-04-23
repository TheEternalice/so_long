/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:48:13 by ade-rese          #+#    #+#             */
/*   Updated: 2024/04/23 15:07:48 by ade-rese         ###   ########.fr       */
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

int	map_open(char *argv)
{
	int			fd;
	int			i;
	t_struct	*stru;

	i = 0;
	fd = open(argv, O_RDONLY | O_TRUNC);
	if (!fd)
		return (1);
	stru->map[i] = get_next_line(fd);
	if (!stru->map)
	{
		close(fd);
		return (1);
	}
	while (stru->map[i])
	{
		stru->map[i] = get_next_line(fd);
		i++;
	}
	close(fd);
	return (0);
}

static int	is_validarg(char c)
{
	return (c == '0' || c == '1' || c == 'P' || c == 'C' || c == 'E');
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

void	flood_fill()
{
	
}
