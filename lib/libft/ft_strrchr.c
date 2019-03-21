/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 16:11:07 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/20 18:15:58 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function is identical to strchr(),
** except it locates the last occurrence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	k;

	i = 0;
	k = c;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == k)
			return (char*)(s + i);
		i--;
	}
	return (NULL);
}
