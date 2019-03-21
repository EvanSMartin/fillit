/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 18:45:31 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/20 16:57:11 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies len bytes from string src to string dst.
** The two strings may overlap.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char*)dst;
	s = (char*)src;
	if (d < s)
		return (ft_memcpy(d, s, len));
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
