/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 13:47:13 by ldoncker          #+#    #+#             */
/*   Updated: 2019/12/14 14:59:55 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** (enlever le '|| !del' ligne 23 pour les tests)
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *alst;

	if (!lst || !del)
		return (NULL);
	if (!f)
		return (lst);
	if (!(alst = ft_lstnew(f(lst->content))))
		return (NULL);
	if (lst->next)
	{
		if (!(alst->next = ft_lstmap(lst->next, f, del)))
		{
			ft_lstdelone(lst, del);
			return (NULL);
		}
	}
	else
		alst->next = NULL;
	return (alst);
}
