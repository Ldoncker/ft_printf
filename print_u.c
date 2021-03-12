/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:58:25 by ldoncker          #+#    #+#             */
/*   Updated: 2020/11/29 16:47:03 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_fill_u(char *nbr_str, t_flags flags, size_t len)
{
	int	ret;

	ret = 0;
	if (flags.dot >= 0)
		ret += ft_fill_width(flags.dot - 1, len - 1, 1);
	ret += ft_putstr(nbr_str, len);
	return (ret);
}

static int	ft_put_u(char *nbr_str, t_flags flags)
{
	size_t	len;
	int		ret;

	ret = 0;
	len = ft_strlen(nbr_str);
	if (flags.left == 1)
		ret += ft_fill_u(nbr_str, flags, len);
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
		ret += ft_fill_u(nbr_str, flags, len);
	return (ret);
}

int			ft_print_u(unsigned int nbr, t_flags flags)
{
	char	*nbr_str;
	int		ret;

	ret = 0;
	if (flags.dot == 0 && nbr == 0)
	{
		ret += ft_fill_width(flags.width, 0, 0);
		return (ret);
	}
	nbr_str = ft_itoa_base(nbr, 10);
	ret += ft_put_u(nbr_str, flags);
	free(nbr_str);
	return (ret);
}
