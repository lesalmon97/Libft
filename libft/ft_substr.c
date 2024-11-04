/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:43:49 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/04 13:44:35 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	c;

	if ((unsigned int)ft_strlen(s) <= start)
	{
		s2 = malloc(sizeof(char) * 1);
		if (s2 == NULL)
			return (NULL);
		s2[0] = '\0';
		return (s2);
	}
	c = ft_strlen(s + start);
	if (c < len)
		len = c;
	s2 = malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	c = 0;
	while (c < len && s[start + c] != '\0')
	{
		s2[c] = s[start + c];
		c++;
	}
	s2[c] = '\0';
	return (s2);
}
