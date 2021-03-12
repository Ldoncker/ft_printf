/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:38:28 by ldoncker          #+#    #+#             */
/*   Updated: 2019/12/10 16:14:25 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*newstr;

	if (!s1 || !set)
		return (0);
	i = 0;
	len = ft_strlen(s1);
	while (check(s1[i], set))
		i++;
	while (check(s1[len - 1], set))
		len--;
	if (len == 0)
		return (ft_strdup(""));
	len -= i;
	newstr = ft_substr(s1, i, len);
	if (newstr == 0)
		return (NULL);
	newstr[len] = '\0';
	return (newstr);
}
