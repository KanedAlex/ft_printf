/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:50:47 by alienard          #+#    #+#             */
/*   Updated: 2019/11/27 18:13:29 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	unsigned int i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			fd = ft_putchar_fd(s[i], fd);
			i++;
		}
	}
	return (fd);
}
