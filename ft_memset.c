/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 06:11:36 by asebrani          #+#    #+#             */
/*   Updated: 2024/04/19 20:39:49 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* settong memory bite per bite */
void	*ft_memset(void	*b, int c, size_t	len)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
