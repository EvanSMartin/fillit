/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 14:48:00 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/15 22:33:39 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of
** the string given as argument without whitespaces at the beginning or at
** the end of the string. Will be considered as whitespaces the
** following characters ’ ’, ’\n’ and ’\t’. If s has no
** whitespaces at the beginning or at the end, the function returns a
** copy of s. If the allocation fails the function returns NULL.
*/

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && ft_iswspace(s[i]))
		i++;
	j = ft_strlen(&s[i]) - 1;
	while (s[i] && ft_iswspace(s[j + i]))
		j--;
	if (!(str = ft_strnew(j + 1)))
		return (NULL);
	ft_strncpy(str, (s + i), (j + 1));
	return (str);
}
