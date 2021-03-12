/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:19:13 by ldoncker          #+#    #+#             */
/*   Updated: 2021/01/24 15:37:55 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_fill_d(char *nbr_str, int tmp, t_flags flags, size_t len)
{
	int	ret;

	ret = 0;
	if (tmp < 0 && flags.dot >= 0)
		ft_putchar('-');
	if (flags.dot >= 0)
		ret += ft_fill_width(flags.dot - 1, len - 1, 1);
	ret += ft_putstr(nbr_str, len);
	return (ret);
}

static int	ft_put_d(char *nbr_str, int tmp, t_flags flags)
{
	const size_t	len = ft_strlen(nbr_str);
	int				ret;

	ret = 0;
	if (flags.left == 1)
		ret += ft_fill_d(nbr_str, tmp, flags, len);
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
		ret += ft_fill_d(nbr_str, tmp, flags, len);
	return (ret);
}

static void	check_zero(t_flags *flags)
{
	if (flags->zero == 1 && flags->dot < 0)
		ft_putchar('-');
	flags->width--;
}

static int	ft_nonzero_d(int nbr, t_flags flags)
{
	char	*nbr_str;
	int		ret;
	int		tmp;
	long	min;

	ret = 0;
	tmp = nbr;
	min = 0;
	if (nbr < 0 && (flags.dot >= 0 || flags.zero == 1))
	{
		check_zero(&flags);
		nbr *= -1;
		nbr == -2147483648 ? min = 2147483648 : nbr;
		ret++;
	}
	if (min)
		nbr_str = ft_itoa_base(min, 10);
	else
		nbr_str = ft_itoa(nbr);
	if (!nbr_str)
		return (0);
	ret += ft_put_d(nbr_str, tmp, flags);
	free(nbr_str);
	return (ret);
}

int			ft_print_d(int nbr, t_flags flags)
{
	int		ret;

	ret = 0;
	if (flags.dot == 0 && nbr == 0)
		return (ft_fill_width(flags.width, 0, 0));
	if (nbr == 0 && flags.sign == 1 && flags.dot < 0)
	{
		ret += ft_putchar('0');
		ret += ft_fill_width(flags.width, 1, 0);
		return (ret);
	}
	else
		ret += ft_nonzero_d(nbr, flags);
	return (ret);
}
