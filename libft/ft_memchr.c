/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:03:56 by ldoncker          #+#    #+#             */
/*   Updated: 2019/12/15 14:16:16 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*un_s;

	if (!s)
		return (0);
	x = 0;
	un_s = (unsigned char *)s;
	while (x < n)
	{
		if (un_s[x] == (unsigned char)c)
			return (un_s + x);
		x++;
	}
	return (0);
}
