/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:25:34 by ldoncker          #+#    #+#             */
/*   Updated: 2019/12/14 10:19:59 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t hs;
	size_t ndle;

	hs = 0;
	if (ft_strlen(needle) == 0 || !*needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	if (ft_strlen(haystack) == 0 || haystack == NULL)
		return (NULL);
	while (haystack[hs] != '\0')
	{
		ndle = 0;
		while (haystack[hs + ndle] == needle[ndle] && (hs + ndle) < len)
		{
			ndle++;
			if (needle[ndle] == '\0')
				return ((char *)&haystack[hs]);
		}
		hs++;
	}
	return (0);
}
