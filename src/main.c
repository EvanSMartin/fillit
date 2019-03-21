/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 12:20:32 by ispirido          #+#    #+#             */
/*   Updated: 2018/05/09 21:41:46 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "../includes/fillit.h"
#include "../lib/libft/libft.h"

int		main(int ac, char **av)
{
	char	*buf;
	t_list	*list;
	t_map	*map;

	buf = ft_strnew(21);
	if (ac != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	if ((list = ft_read_tetris(open(av[1], O_RDONLY), buf)) == NULL)
	{
		ft_putstr("error\n");
		return (1);
	}
	map = ft_solve(list);
	ft_print_map(map);
	ft_free_map(map);
	ft_free_list(list);
	return (0);
}
