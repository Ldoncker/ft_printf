/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 08:58:13 by ldoncker          #+#    #+#             */
/*   Updated: 2020/11/29 17:00:10 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_s_tolower(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] = ft_tolower(str[i]);
	return (str);
}

char		*ft_itoa_base(unsigned long long nbr, int base)
{
	size_t				len;
	unsigned long long	tmp;
	char				*str;

	len = 0;
	tmp = nbr;
	if (nbr == 0)
		return (ft_strdup("0"));
	while (tmp != 0)
	{
		tmp /= base;
		len++;
	}
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (nbr != 0)
	{
		str[len - 1] = (nbr % base) + (nbr % base > 9 ? '7' : '0');
		nbr /= base;
		len--;
	}
	return (str);
}
