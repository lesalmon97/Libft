/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:57:49 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/07 16:40:03 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	newlst = (t_list *)malloc(sizeof(t_list));
	while (lst != NULL)
	{
		newlst = f(lst->content);
		free(lst->content);
		lst = lst->next;
		newlst = newlst->next;
	}
	return (newlst);
}
