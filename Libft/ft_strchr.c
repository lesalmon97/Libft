/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:30:17 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 17:26:57 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (ptr[i] != (char)c)
	{
		if (ptr[i] == '\0')
			return (NULL);
		i++;
	}
	return (&ptr[i]);
}
/*
int main ()
{
	const char *s = "hello world";
	int c = 'e';

	printf("%p\n", ft_strchr(s, c));
	printf("%p\n", strchr(s, c));
}
*/