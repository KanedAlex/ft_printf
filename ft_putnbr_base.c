/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 19:50:17 by alienard          #+#    #+#             */
/*   Updated: 2019/12/03 15:50:04 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_putnbr_hexa(long long unsigned int nbr, int r)
{
	long long unsigned int	a;
	char					*base;

	base = "0123456789abcdef";
	a = (nbr < 0) ? -nbr : nbr;
	(nbr < 0) ? r = ft_putchar_fd('-', r) : 0;
	(a > 15) ? r = ft_putnbr_hexa((long long unsigned int)(a / 16), r) : 0;
	r = ft_putchar_fd(base[a % 16], r);
	return (r);
}

int		ft_putnbr_hexm(long long unsigned int nbr, int r)
{
	long long unsigned int	a;
	char					*base;

	base = "0123456789ABCDEF";
	a = (nbr < 0) ? -nbr : nbr;
	(nbr < 0) ? r = ft_putchar_fd('-', r) : 0;
	(a > 15) ? r = ft_putnbr_hexm((long long unsigned int)(a / 16), r) : 0;
	r = ft_putchar_fd(base[a % 16], r);
	return (r);
}

int		ft_putnbr_unsigned(unsigned int n, int r)
{
	n = (n < 0) ? -n : n;
	(n > 9) ? r = ft_putnbr_unsigned((n / 10), r) : 0;
	r = ft_putchar_fd(n % 10 + '0', r);
	return (r);
}
