/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 09:19:45 by ldoncker          #+#    #+#             */
/*   Updated: 2021/01/14 10:43:24 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str, int len)
{
	int	i;

	i = 0;
	while (str[i] && i < len)
		ft_putchar(str[i++]);
	return (i);
}

int	ft_fill_width(int width, int len, int zero)
{
	int	ret;

	ret = 0;
	while (width - len > 0)
	{
		if (zero == 1)
		{
			ft_putchar('0');
		}
		else
			ft_putchar(' ');
		width--;
		ret++;
	}
	return (ret);
}
