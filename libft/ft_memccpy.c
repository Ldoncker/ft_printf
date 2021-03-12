/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:57:09 by ldoncker          #+#    #+#             */
/*   Updated: 2019/12/16 13:58:11 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*str1;
	unsigned const char	*str2;

	if (!n || !dst || !src)
		return (0);
	str1 = dst;
	str2 = src;
	while (n-- != 0)
	{
		if ((*str1++ = *str2++) == (unsigned char)c)
			return (str1);
	}
	return (0);
}
