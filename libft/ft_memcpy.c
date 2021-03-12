/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 09:53:55 by ldoncker          #+#    #+#             */
/*   Updated: 2019/12/17 13:02:29 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		x;
	char		*str1;
	const char	*str2;

	str1 = dst;
	str2 = src;
	x = -1;
	if (n == 0 || dst == src)
		return (dst);
	while (++x < n)
		*(str1 + x) = *(str2 + x);
	return (dst);
}
