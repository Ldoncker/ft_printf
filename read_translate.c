/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_translate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 23:09:30 by ldoncker          #+#    #+#             */
/*   Updated: 2020/11/29 16:58:36 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_specifier(int c)
{
	return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd')
		|| (c == 'i') || (c == 'u') || (c == 'x') || (c == 'X')
		|| (c == '%'));
}

int		ft_read_flags(const char *s, int i, t_flags *flags, va_list av)
{
	while (s[i])
	{
		if (!ft_isdigit(s[i]) && !ft_specifier(s[i]) && (s[i] != '-')
			&& (s[i] != '0') && (s[i] != '.') && (s[i] != '*'))
			break ;
		if (s[i] == '0' && flags->width == 0 && flags->left == 0)
			flags->zero = 1;
		if (s[i] == '-')
			*flags = ft_flag_left(*flags);
		if (s[i] == '.')
			i = ft_flag_dot(s, i, flags, av);
		if (s[i] == '*')
			*flags = ft_flag_width(*flags, av);
		if (ft_isdigit(s[i]))
			*flags = ft_flag_digit(s[i], *flags);
		if (ft_specifier(s[i]))
		{
			flags->spec = s[i];
			break ;
		}
		i++;
	}
	return (i);
}

int		ft_translator(int c, t_flags flags, va_list av)
{
	int	ret;

	ret = 0;
	if (c == 'c')
		ret += ft_print_c(va_arg(av, int), flags);
	else if (c == 's')
		ret += ft_print_s(va_arg(av, char *), flags);
	else if (c == 'p')
		ret += ft_print_p(va_arg(av, unsigned long long), flags);
	else if (c == 'd' || c == 'i')
		ret += ft_print_d(va_arg(av, int), flags);
	else if (c == 'u')
		ret += ft_print_u(va_arg(av, unsigned int), flags);
	else if (c == 'x')
		ret += ft_print_x(va_arg(av, unsigned int), 1, flags);
	else if (c == 'X')
		ret += ft_print_x(va_arg(av, unsigned int), 0, flags);
	else if (c == '%')
		ret += ft_print_perc(flags);
	return (ret);
}
