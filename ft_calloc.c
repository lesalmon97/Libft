/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:38:22 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/04 13:38:24 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	c;

	c = 0;
	res = malloc(count * size);
	if (res == NULL)
		return (NULL);
	while (c < count * size)
	{
		((char *)res)[c] = 0;
		c++;
	}
	return (res);
}
