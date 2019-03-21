/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 19:19:25 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/16 14:37:49 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copies bytes from string src to string dst.
** If the character c (as converted to an unsigned char)
** occurs in the string src, the copy stops
** and a pointer to the byte after the copy
** of c in the string dst is returned. Otherwise, n bytes are copied,
** and a NULL pointer is returned.
*/

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	*dest;
	unsigned char	*source;

	i = 0;
	c1 = c;
	c1 = (unsigned char)c;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n-- > 0)
	{
		dest[i] = source[i];
		if (source[i] == c1)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
