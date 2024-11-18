/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:25:08 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/08 11:50:26 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nvelem;

	nvelem = malloc(sizeof(t_list));
	if (nvelem == NULL)
		return (NULL);
	nvelem->content = content;
	nvelem->next = NULL;
	return (nvelem);
}
