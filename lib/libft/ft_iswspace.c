/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswspace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 17:39:04 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/15 17:27:58 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the character is a
** whitespace (spaces, tabs, newlines).
*/

int		ft_iswspace(int c)
{
	return (c == '\t' || c == ' ' || c == '\n');
}
