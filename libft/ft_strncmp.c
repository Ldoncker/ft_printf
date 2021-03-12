/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:09:01 by ldoncker          #+#    #+#             */
/*   Updated: 2019/12/15 14:33:02 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	int		result;

	x = 0;
	result = 0;
	if (!n || !s1 || !s2)
		return (0);
	while ((s1[x] != '\0') && (s2[x] != '\0')
			&& (s1[x] == s2[x]) && (n - 1 - x))
		x++;
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
