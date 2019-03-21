/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 13:44:28 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/15 21:08:10 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a string that need
** to be freed with free(3), then sets its pointer to NULL.
*/

void	ft_strdel(char **as)
{
	if (as)
		ft_memdel((void **)as);
}
