/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:30:03 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 16:44:10 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	const char		*s;

	if (!dst && !src)
		return (NULL);
	d = dst;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
int main(void)
{
    char src[] = "Hello, world!";
    char dst_ft[50];
    char dst_orig[50];
    size_t n = strlen(src) + 1; 

    // Utilisation de ft_memcpy
    ft_memcpy(dst_ft, src, n);
    printf("Résultat de ft_memcpy : %s\n", dst_ft);

    // Utilisation de memcpy pour comparaison
    memcpy(dst_orig, src, n);
    printf("Résultat de memcpy : %s\n", dst_orig);

    // Vérification du résultat
    if (strcmp(dst_ft, dst_orig) == 0)
        printf("Test réussi : ft_memcpy et memcpy ok.\n");
    else
        printf("Test échoué : ft_memcpy et memcpy pas ok.\n");

    return 0;
}
*/