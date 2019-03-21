/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 21:08:30 by ispirido          #+#    #+#             */
/*   Updated: 2018/05/09 21:18:28 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include "../lib/libft/libft.h"

typedef struct	s_map
{
	int			size;
	char		**array;
}				t_map;
typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;
typedef struct	s_etris
{
	char		**pos;
	int			width;
	int			height;
	char		value;
}				t_etris;
t_list			*ft_read_tetris(int fd, char *buf);
void			ft_print_map(t_map *map);
void			ft_free_map(t_map *map);
void			ft_set_piece(t_etris *tetris, t_map *map,
				t_point *point, char c);
int				ft_place(t_etris *tetri, t_map *map, int x, int y);
t_map			*ft_map_new(int size);
t_map			*ft_solve(t_list *list);
t_point			*ft_point_new(int x, int y);
t_etris			*ft_tetris_new(char **pos, int width, int height, char c);
void			ft_free_tetris(t_etris *tetri);
t_list			*ft_free_list(t_list *list);
#endif
