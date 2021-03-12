/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:59:58 by ldoncker          #+#    #+#             */
/*   Updated: 2019/12/15 17:15:35 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;

	if (!s)
		return (NULL);
	pointer = (char *)s;
	while (*pointer)
	{
		if (*pointer == (char)c)
			return (pointer);
		pointer++;
	}
	if (c == 0)
		return (pointer);
	return (NULL);
}
