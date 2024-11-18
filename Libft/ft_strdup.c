/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:40:02 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 16:59:31 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	c;
	size_t	len;

	c = 0;
	len = ft_strlen((char *)s1) + 1;
	s2 = malloc(len);
	if (s2 == NULL)
		return (NULL);
	while (s1[c] != '\0')
	{
		s2[c] = s1[c];
		c++;
	}
	s2[c] = '\0';
	return (s2);
}
/*
int	main()
{
	char *str = "je suis un test";

	printf("%s\n", ft_strdup(str));
	return (0);
}
*/