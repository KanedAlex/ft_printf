/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:02:30 by alienard          #+#    #+#             */
/*   Updated: 2019/11/27 18:10:07 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	unsigned int	a;

	a = (n > 0) ? n : -n;
	(n < 0) ? fd = ft_putchar_fd('-', fd) : 0;
	(a > 9) ? fd = ft_putnbr_fd((int)(a / 10), fd) : 0;
	fd = ft_putchar_fd(a % 10 + '0', fd);
	return (fd);
}
