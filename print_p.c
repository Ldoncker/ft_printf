/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:31:20 by ldoncker          #+#    #+#             */
/*   Updated: 2020/11/29 16:17:56 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_fill_p(char *str, t_flags flags, size_t len)
{
	int	ret;

	ret = 0;
	ret += ft_putstr("0x", 2);
	if (flags.dot >= 0)
	{
		ret += ft_fill_width(flags.dot, len, 1);
		ret += ft_putstr(str, flags.dot);
	}
	else if (flags.zero == 1)
	{
		ret += ft_fill_width(flags.width, len + 2, flags.zero);
		ret += ft_putstr(str, len);
	}
	else
		ret += ft_putstr(str, len);
	return (ret);
}

int			ft_print_p(unsigned long long nbr, t_flags flags)
{
	int		ret;
	size_t	len;
	char	*str;

	ret = 0;
	if (nbr == 0 && flags.dot == 0)
	{
		ret += ft_putstr("0x", 2);
		return (ret += ft_fill_width(flags.width, 2, flags.zero));
	}
	if (nbr == 0 && flags.dot >= 0)
		flags.width -= 1;
	str = ft_itoa_base(nbr, 16);
	str = ft_s_tolower(str);
	len = ft_strlen(str);
	if ((size_t)flags.dot < len)
		flags.dot = len;
	if (flags.left == 1)
		ret += ft_fill_p(str, flags, len);
	if (flags.zero != 1)
		ret += ft_fill_width(flags.width, len + 2, 0);
	if (flags.left == 0)
		ret += ft_fill_p(str, flags, len);
	free(str);
	return (ret);
}
