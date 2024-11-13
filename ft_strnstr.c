/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:30:41 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/04 13:30:43 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *txt, const char *str, size_t len)
{
	size_t	c;
	size_t	i;
	size_t	j;

	if (str[0] == '\0')
		return ((char *)txt);
	c = 0;
	while (txt[c] && c < len)
	{
		i = c;
		j = 0;
		if (str[j] == txt [i])
		{
			while (str[j] == txt[i] && str[j] && i < len)
			{
				i++;
				j++;
			}
			if (str[j] == '\0')
				return ((char *)txt + c);
		}
		c++;
	}
	return (NULL);
}
