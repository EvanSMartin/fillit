/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 18:07:12 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/15 22:09:32 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copy at most len characters from src into dst.
** If src is less than len characters long, the
** remainder of dst is filled with `\0'characters.
** Otherwise, dst is not terminated.
*/

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && len > i)
	{
		dst[i] = src[i];
		i++;
	}
	while (len > i && dst[i] != '\0')
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
