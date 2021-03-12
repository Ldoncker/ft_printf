/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 18:18:32 by ldoncker          #+#    #+#             */
/*   Updated: 2020/11/29 16:05:24 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_flag_left(t_flags flags)
{
	flags.left = 1;
	flags.zero = 0;
	return (flags);
}

t_flags	ft_flag_width(t_flags flags, va_list av)
{
	flags.star = 1;
	flags.width = va_arg(av, int);
	if (flags.width < 0)
	{
		flags.left = 1;
		flags.sign = 1;
		flags.width *= -1;
	}
	return (flags);
}

int		ft_flag_dot(const char *s, int i, t_flags *flags, va_list av)
{
	if (s[++i] == '*')
	{
		flags->dot = va_arg(av, int);
		i++;
	}
	else
	{
		flags->dot = 0;
		while (ft_isdigit(s[i]))
			flags->dot = (flags->dot * 10) + (s[i++] - 48);
	}
	return (i);
}

t_flags	ft_flag_digit(char c, t_flags flags)
{
	if (flags.star == 1)
		flags.width = 0;
	flags.width = (flags.width * 10) + (c - 48);
	return (flags);
}
