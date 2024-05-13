/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:38:14 by ade-rese          #+#    #+#             */
/*   Updated: 2024/05/13 12:19:35 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void    ft_draw_sprite(t_utils *params, t_img *img, int x, int y)
{
    int                i;
    int                j;
    unsigned int    color;

    if (!img)
        return ;
    i = 0;
    while (i < img->width)
    {
        j = -1;
        while (++j < img->height)
        {
            if (j + y < 0 || j + y >= params->map_height * TILE_SIZE
                || i + x < 0 || i + x >= params->map_width * TILE_SIZE)
                continue ;
            color = ((int *)img->data)[(int)(j) *img->width + (int)(i)];
            if (color == 0xFF000000)
                continue ;
            ((int *)params->canvas->data)[(y + j) * params->canvas->width
                + (x + i)] = color;
        }
        i++;
    }
}
