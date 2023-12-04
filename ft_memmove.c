/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:04:47 by asebrani          #+#    #+#             */
/*   Updated: 2023/11/05 23:07:09 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = dst;
	b = src;
	if (!dst && !src)
		return (NULL);
	if (a < b)
	{
		while (len --)
		{
			*(a++) = *(b++);
		}
	}
	else
	{
		while (len --)
		{
			a[len] = b[len];
		}
	}
	return (dst);
}
