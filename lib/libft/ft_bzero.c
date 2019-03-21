/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 13:11:19 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/20 16:55:45 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** bzero function copies n bytes,
** each with a value of zero into string s.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
