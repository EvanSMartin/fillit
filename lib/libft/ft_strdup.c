/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 11:53:29 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/20 17:01:21 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocate space for a new str(same size as original);
** copy the original into the new space, including the null.
*/

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(sizeof(*s2) * (ft_strlen(s1) + 1));
	if (!s2)
		return (NULL);
	return (ft_strcpy(s2, s1));
}
