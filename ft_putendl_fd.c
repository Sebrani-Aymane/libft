/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:54:03 by asebrani          #+#    #+#             */
/*   Updated: 2023/11/16 16:46:01 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = 0;
	if (s == NULL || fd < 0)
		return ;
	while (s[len] != '\0')
	{
		len++;
	}
	write (fd, s, len);
	write (fd, "\n", 1);
}
