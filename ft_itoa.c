/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:12:14 by asebrani          #+#    #+#             */
/*   Updated: 2023/11/16 11:18:44 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10) 
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		num;
	int		len;
	char	*str;

	num = n;
	len = get_num_len(num);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (len)
	{
		str[--len] = (num % 10) * (1 - 2 * (num < 0)) + '0';
		num /= 10;
	}
	*str = *str - 3 * (n < 0);
	return (str);
}
