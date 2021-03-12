/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:11:44 by ldoncker          #+#    #+#             */
/*   Updated: 2019/12/10 16:19:10 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, int n)
{
	int		x;
	char	*target;

	x = 0;
	if (!(target = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (x < n)
	{
		target[x] = s1[x];
		x++;
	}
	target[x] = '\0';
	return (target);
}
