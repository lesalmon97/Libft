/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:25:08 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/05 12:50:44 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*lstnew(void *content)
{
	t_list	*nvelem;

	nvelem = (t_list *)malloc(sizeof(t_list));
	if (content == NULL || nvelem == NULL)
		return (NULL);
	nvelem->content = content;
	nvelem->next = NULL;
	return (nvelem);
}
