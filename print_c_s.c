/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:17:43 by ldoncker          #+#    #+#             */
/*   Updated: 2020/11/29 16:14:47 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_print_c(char c, t_flags flags)
{
	int	ret;

	ret = 0;
	if (flags.left == 1)
		ft_putchar(c);
	ret = ft_fill_width(flags.width, 1, flags.zero);
	if (flags.left == 0)
		ft_putchar(c);
	return (ret + 1);
}

static int	ft_fill_s(char *s, t_flags flags, size_t len)
{
	int	ret;

	ret = 0;
	if (flags.dot >= 0)
	{
		ret += ft_putstr(s, flags.dot);
		if (flags.left == 1)
		{
			ret += ft_fill_width(flags.width, flags.dot, 0);
		}
	}
	else if (flags.left == 1)
	{
		ret += ft_putstr(s, len);
		ret += ft_fill_width(flags.width, len, 0);
	}
	else
		ret += ft_putstr(s, len);
	return (ret);
}

int			ft_print_s(char *s, t_flags flags)
{
	int		ret;
	char	*s_sub;
	size_t	len;

	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	if ((s_sub = ft_substr(s, 0, len)) == NULL)
		return (-1);
	if (flags.dot >= 0 && (size_t)flags.dot > len)
		flags.dot = len;
	ret = 0;
	if (flags.left == 1)
		ret += ft_fill_s(s_sub, flags, len);
	else
	{
		if (flags.dot >= 0)
			ret += ft_fill_width(flags.width, flags.dot, flags.zero);
		else
			ret += ft_fill_width(flags.width, len, flags.zero);
		ret += ft_fill_s(s_sub, flags, len);
	}
	free(s_sub);
	return (ret);
}
