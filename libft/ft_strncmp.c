/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:35:25 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 17:21:15 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;
	size_t	sign;

	c = 0;
	sign = 0;
	if (n == 0)
		return (0);
	while ((s1[c] != '\0' || s2[c] != '\0') && c < n)
	{
		if (s1[c] != s2[c])
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		c++;
	}
	return ((s1[c] - s2[c]) * sign);
}
/*
int main ()
{
	const char *s1 = "Hell0";
	const char *s2 = "Hello";
	size_t		size = 5;

	printf ("%d\n", ft_strncmp(s1, s2, size));
	printf ("%d\n", strncmp(s1, s2, size));
	return (0);
}
*/