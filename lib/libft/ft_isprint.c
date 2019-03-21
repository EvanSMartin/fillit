/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 16:51:25 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/15 17:26:34 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** tests for any printing character,
** including space (` ').
*/

int		ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
