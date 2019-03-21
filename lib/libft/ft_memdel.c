/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 13:18:10 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/15 19:00:16 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a memory area
** that needs to be freed with free(3), then puts the pointer to NULL.
** Use memmove(3) if the memory areas do overlap.
*/

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = (NULL);
}
