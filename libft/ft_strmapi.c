/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:05:35 by ldoncker          #+#    #+#             */
/*   Updated: 2019/11/28 15:48:08 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	x;
	char	*mem;

	if (s == NULL || f == NULL)
		return (NULL);
	if ((mem = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	x = -1;
	while (++x < ft_strlen(s))
		mem[x] = (*f)((unsigned int)x, s[x]);
	mem[x] = '\0';
	return (mem);
}
