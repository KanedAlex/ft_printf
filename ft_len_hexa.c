/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 22:11:42 by alienard          #+#    #+#             */
/*   Updated: 2019/12/03 15:17:39 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned int	ft_len_hexa(long long unsigned int a)
{
	unsigned int	len;

	len = 0;
	while (a > 15)
	{
		a = a / 16;
		len++;
	}
	return (len);
}

unsigned int	ft_len_unsigned(unsigned int a)
{
	unsigned int	len;

	len = 0;
	while (a > 9)
	{
		a = a / 10;
		len++;
	}
	return (len);
}

unsigned int	ft_len_d(int a)
{
	long			i;
	unsigned int	len;

	len = 0;
	i = a;
	if (a < 0)
	{
		i = -i;
		len++;
	}
	while (i > 9)
	{
		i = i / 10;
		len++;
	}
	return (len);
}
