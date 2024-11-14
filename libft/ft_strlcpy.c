/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:30:34 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 17:19:00 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	result;

	i = 0;
	result = 0;
	while (src[result] != '\0')
		result++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (result);
}
/*
int	main(void)
{
	char	dest[10];
	char	*src = "bonjour";
	size_t	size = 10;

	printf("%zu\n", ft_strlcpy(dest, src, size));
	printf("%zu\n", strlcpy(dest, src, size));
	return (0);
}
*/