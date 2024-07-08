/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils0.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-rese <ade-rese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:41:04 by ade-rese          #+#    #+#             */
/*   Updated: 2024/07/08 12:24:34 by ade-rese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	*ft_memcpy(void *dest, void *src, long long n)
{
	char	*sr;
	char	*ds;

	sr = (char *)src;
	ds = (char *)dest;
	if (!src && !dest)
		return (0);
	while (n--)
		*ds++ = *sr++;
	return (dest);
}

long long	ft_strlcpy(char *dst, char *src, long long size)
{
	long long	i;
	long long	j;

	i = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size)
	{
		if (i >= size)
			j = size - 1;
		else
			j = i;
		ft_memcpy(dst, src, j);
		dst[j] = '\0';
	}
	return (i);
}

char	*ft_strdup(char *s)
{
	char	*sn;

	sn = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!sn)
		return (0);
	else
		ft_strlcpy(sn, s, ft_strlen(s) + 1);
	return (sn);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	if (!s1)
		return (0);
	while (n > 0 && (*s1 && *s2) != '\0')
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
