/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 09:35:53 by ldoncker          #+#    #+#             */
/*   Updated: 2020/11/29 16:57:17 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_fill_x(char *x, t_flags flags, size_t len)
{
	int	ret;

	ret = 0;
	if (flags.dot >= 0)
		ret += ft_fill_width(flags.dot - 1, len - 1, 1);
	ret += ft_putstr(x, len);
	return (ret);
}

static int	ft_put_x(char *x, t_flags flags)
{
	int				ret;
	const size_t	len = ft_strlen(x);

	ret = 0;
	if (flags.left == 1)
		ret += ft_fill_x(x, flags, len);
	if (flags.dot >= 0 && (size_t)flags.dot < len)
		flags.dot = len;
	if (flags.dot >= 0)
	{
		flags.width -= flags.dot;
		ret += ft_fill_width(flags.width, 0, 0);
	}
	else
	{
		if (flags.sign == 1)
			flags.zero = 0;
		ret += ft_fill_width(flags.width, len, flags.zero);
	}
	if (flags.left == 0)
		ret += ft_fill_x(x, flags, len);
	return (ret);
}

int			ft_print_x(unsigned int nbr, int lower, t_flags flags)
{
	int		ret;
	char	*x;

	ret = 0;
	if (flags.dot == 0 && nbr == 0)
	{
		ret += ft_fill_width(flags.width, 0, 0);
		return (ret);
	}
	x = ft_itoa_base((unsigned long long)nbr, 16);
	if (lower == 1)
		x = ft_s_tolower(x);
	ret += ft_put_x(x, flags);
	free(x);
	return (ret);
}
