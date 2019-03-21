/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 13:06:01 by ispirido          #+#    #+#             */
/*   Updated: 2018/03/15 17:33:24 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate (with malloc(3)) and returns a “fresh” string
** ending with ’\0’ representing the integer n given as argument.
** Negative numbers must be supported. If the allocation fails,
** the function returns NULL.
*/

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = ft_len(n);
	str = (char *)malloc((len + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[len] = '\0';
	while (n >= 10)
	{
		str[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	str[len - 1] = n + '0';
	return (str);
}
