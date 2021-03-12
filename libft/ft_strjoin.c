/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 19:20:47 by ldoncker          #+#    #+#             */
/*   Updated: 2019/12/10 15:37:53 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	int		s1len;
	int		x;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	x = ft_strlen(s2);
	if (!(joint = (char *)malloc(sizeof(char) * (s1len + x + 1))))
		return (NULL);
	x = -1;
	while (s1[++x])
		joint[x] = s1[x];
	x = -1;
	while (s2[++x])
		joint[s1len + x] = s2[x];
	joint[s1len + x] = '\0';
	return (joint);
}
