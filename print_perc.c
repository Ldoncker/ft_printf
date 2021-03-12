/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_perc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:17:09 by ldoncker          #+#    #+#             */
/*   Updated: 2020/11/29 16:34:29 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_print_perc(t_flags flags)
{
	int	ret;

	ret = 0;
	if (flags.left == 1)
	{
		ret += ft_putchar('%');
		ret += ft_fill_width(flags.width - 1, 0, 0);
	}
	if (flags.left == 0)
	{
		ret += ft_fill_width(flags.width - 1, 0, flags.zero);
		ret += ft_putchar('%');
	}
	return (ret);
}
