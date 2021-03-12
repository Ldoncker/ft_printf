/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 07:51:00 by ldoncker          #+#    #+#             */
/*   Updated: 2019/12/15 14:57:05 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getlen(int nb)
{
	int x;

	x = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		x = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		x++;
	}
	return (x);
}

char		*ft_itoa(int n)
{
	size_t	nb;
	int		minus;
	int		size;
	char	*new;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	minus = (n < 0) ? 1 : 0;
	nb = (n < 0) ? -n : n;
	size = (getlen(n));
	if ((new = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	new[size] = '\0';
	if (minus == 1)
		new[0] = '-';
	while (size-- > minus)
	{
		new[size] = (nb % 10) + '0';
		nb /= 10;
	}
	return (new);
}
