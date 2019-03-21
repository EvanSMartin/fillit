/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 16:38:23 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/15 17:16:01 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** tests for any character for which
** isalpha(3) or isdigit(3) is true.
*/

int		ft_isalnum(int c)
{
	return (ft_isalpha(c)) || (ft_isdigit(c));
}
