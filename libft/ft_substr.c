/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:26:03 by ldoncker          #+#    #+#             */
/*   Updated: 2019/11/28 14:24:00 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	x;
	char			*sub;

	x = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) - (size_t)start <= len)
		len = ft_strlen(s) - (size_t)start;
	if ((size_t)start > ft_strlen(s))
		len = 0;
	if ((sub = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	if (!(start > ft_strlen(s)))
	{
		while (x < len && s[start + x])
		{
			sub[x] = s[start + x];
			x++;
		}
	}
	sub[x] = '\0';
	return (sub);
}
