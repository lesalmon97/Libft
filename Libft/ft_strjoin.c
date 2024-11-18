/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:45:01 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 17:01:01 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	c;
	size_t	len;
	char	*str;

	c = 0;
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = malloc(len + 1);
	if (str == NULL)
		return (str);
	while (s1[c] != '\0')
	{
		str[c] = s1[c];
		c++;
	}
	while (s2[c - ft_strlen((char *)s1)] != '\0')
	{
		str[c] = s2[c - ft_strlen((char *)s1)];
		c++;
	}
	str[c] = '\0';
	return (str);
}
/*
int main ()
{
	char *s1 = "cc";
	char *s2 = "ok";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/