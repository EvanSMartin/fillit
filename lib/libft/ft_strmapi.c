/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 17:38:56 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/20 16:47:40 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string passed
** as argument by giving its index as first argument to create a
** “fresh” new string (with malloc(3)) resulting
** from the successive applications of f.
*/

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	unsigned	i;

	i = 0;
	if (s)
	{
		if (!(str = ft_strnew(ft_strlen(s))))
			return (0);
		while (s[i])
		{
			str[i] = (*f)(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
