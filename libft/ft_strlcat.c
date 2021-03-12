/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:17:35 by ldoncker          #+#    #+#             */
/*   Updated: 2019/11/27 14:03:55 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*pdst;
	const char	*psrc;
	size_t		n;
	size_t		deltalen;

	pdst = dst;
	psrc = src;
	n = size;
	while (n-- != 0 && *pdst)
		pdst++;
	deltalen = pdst - dst;
	n = size - deltalen;
	if (n == 0)
		return (deltalen + ft_strlen(psrc));
	while (*psrc)
	{
		if (n != 1)
		{
			*pdst++ = *psrc;
			n--;
		}
		psrc++;
	}
	*pdst = '\0';
	return (deltalen + (psrc - src));
}
