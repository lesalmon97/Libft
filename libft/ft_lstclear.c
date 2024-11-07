/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:20:58 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/06 15:24:55 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*elem;
	t_list	*temp;

	while (elem != NULL)
	{
		temp = *lst;
		elem = temp;
		del(elem->content);
		free(elem->content);
		*lst = elem;
		*lst = temp->next;
	}
	*lst = NULL;
}
