/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:20:30 by mbennett          #+#    #+#             */
/*   Updated: 2021/10/14 12:10:32 by mbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*lst_aux;

	if (!lst)
		return (NULL);
	lst_aux = 0;
	lst_new = lst_aux;
	while (lst)
	{
		lst_aux = ft_lstnew(f(lst->content));
		if (!lst_aux)
		{
			ft_lstclear(&lst_new, del);
			return (0);
		}
		lst = lst->next;
		ft_lstadd_back(&lst_new, lst_aux);
	}
	return (lst_new);
}
