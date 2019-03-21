/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 20:12:45 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/15 20:54:59 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** append a copy of the null-terminated string s2 to
** the end of the null-terminated string s1, then add a terminating `\0'.
** The string s1 must have sufficient space to hold the result.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}
