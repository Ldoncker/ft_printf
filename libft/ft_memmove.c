/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:32:52 by ldoncker          #+#    #+#             */
/*   Updated: 2019/12/16 14:06:30 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			x;
	unsigned char	*pdst;
	unsigned char	*psrc;

	if (!dst || !src)
		return (0);
	pdst = (unsigned char*)dst;
	psrc = (unsigned char*)src;
	x = -1;
	if (pdst < psrc)
		while (++x < len)
			pdst[x] = psrc[x];
	else
		while (len-- > 0)
			pdst[len] = psrc[len];
	return (dst);
}
