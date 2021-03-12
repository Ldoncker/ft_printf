/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:12:57 by ldoncker          #+#    #+#             */
/*   Updated: 2020/11/29 15:52:34 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_initiate_flags(void)
{
	t_flags		flags;

	flags.spec = 0;
	flags.left = 0;
	flags.zero = 0;
	flags.width = 0;
	flags.star = 0;
	flags.dot = -1;
	flags.sign = 0;
	return (flags);
}

int		ft_read_str(const char *s, va_list av)
{
	t_flags	flags;
	int		ret;
	int		i;

	i = -1;
	ret = 0;
	while (s[++i])
		if (s[i] != '%')
			ret += ft_putchar(s[i]);
		else if (s[i] == '%' && s[i + 1])
		{
			i++;
			flags = ft_initiate_flags();
			i = ft_read_flags(s, i, &flags, av);
			if (ft_specifier(s[i]))
			{
				ret += ft_translator((char)flags.spec, flags, av);
				if (ret == -1)
					return (-1);
			}
			else if (s[i])
				ret += ft_putchar(s[i]);
		}
	return (ret);
}

int		ft_printf(const char *s, ...)
{
	va_list	av;
	int		ret;

	if (s == NULL)
		return (-1);
	va_start(av, s);
	ret = ft_read_str(s, av);
	va_end(av);
	return (ret);
}
