/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:30:45 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 17:27:13 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (p[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (p[i] == (char)c)
			return (&p[i]);
		else
			i--;
	}
	return (NULL);
}
/*
int main ()
{
	const char *s = "hello world";
	int c = 'e';

	printf("%p\n", ft_strrchr(s, c));
	printf("%p\n", strrchr(s, c));
}
*/