/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 20:09:47 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/20 18:16:56 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** locates the first occurrence of the null-termi-nated
** string needle in the string haystack,
** where not more than len char-acters are searched.
** Characters that appear after a `\0' character are not searched.
** If needle is an empty string, haystack is returned;
** if needle occurs nowhere in haystack,
** NULL is returned; otherwise a pointer to the first
** character of the first occurrence of needle is returned.
*/

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	while (need[k] != '\0')
		k++;
	if (k == 0)
		return (char*)(hay);
	while (hay[i] != '\0')
	{
		k = 0;
		while (hay[i + k] == need[k] && need[k] != '\0')
			k++;
		if (need[k] == '\0')
		{
			if (i + k > len)
				break ;
			return (char*)(hay + i);
		}
		i++;
	}
	return (NULL);
}
