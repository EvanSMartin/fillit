/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 12:47:54 by ispirido          #+#    #+#             */
/*   Updated: 2018/05/09 21:28:12 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/fillit.h"
#include "../lib/libft/libft.h"

int		ft_solve_map(t_map *map, t_list *list)
{
	int		x;
	int		y;
	t_etris	*tetri;

	if (list == NULL)
		return (1);
	y = 0;
	tetri = (t_etris *)(list->content);
	while (y < map->size - tetri->height + 1)
	{
		x = 0;
		while (x < map->size - tetri->width + 1)
		{
			if (ft_place(tetri, map, x, y))
			{
				if (ft_solve_map(map, list->next))
					return (1);
				else
					ft_set_piece(tetri, map, ft_point_new(x, y), '.');
			}
			x++;
		}
		y++;
	}
	return (0);
}

int		ft_high_sqrt(int n)
{
	int	size;

	size = 2;
	while (size * size < n)
		size++;
	return (size);
}

t_map	*ft_solve(t_list *list)
{
	int		size;
	t_map	*map;

	size = ft_high_sqrt(ft_lstcount(list) * 4);
	map = ft_map_new(size);
	while (!ft_solve_map(map, list))
	{
		size++;
		ft_free_map(map);
		map = ft_map_new(size);
	}
	return (map);
}
