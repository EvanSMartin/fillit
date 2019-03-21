/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 20:57:45 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/15 21:56:51 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** appends not more than n characters from s2, and then adds a
** terminating `\0'. The source and destination strings should not overlap.
*/

char		*ft_strncat(char *restrict s1, char *restrict s2, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (s1[a] != '\0')
		a++;
	while (b < n && s2[b] != '\0')
	{
		s1[a + b] = s2[b];
		b++;
	}
	s1[a + b] = '\0';
	return (s1);
}
