/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 14:19:49 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/15 18:57:11 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memcpy() function copies n bytes from memory area source
** to memory area destination. The memory areas must not overlap.
** Use memmove(3) if the memory areas do overlap.
*/

void				*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char*)destination;
	src = (unsigned char*)source;
	while (n-- > 0)
		*dst++ = *src++;
	return (destination);
}
