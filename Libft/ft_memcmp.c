/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:36:48 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 16:35:42 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				c;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	c = 0;
	while (c < n)
	{
		if (str1[c] != str2[c])
			return (str1[c] - str2[c]);
		c++;
	}
	return (0);
}
/*
int main(void)
{
    const char str1[] = "Hello, world!";
    const char str2[] = "Hello, WorLd!";
    size_t n = 13;  // Nombre d'octets à comparer

    // Utilisation de ft_memcmp
    int result_ft = ft_memcmp(str1, str2, n);
    printf("Résultat de ft_memcmp : %d\n", result_ft);

    // Utilisation de memcmp pour comparaison
    int result_orig = memcmp(str1, str2, n);
    printf("Résultat de memcmp : %d\n", result_orig);

    // Vérification du résultat
    if ((result_ft == 0 && result_orig == 0) 
		|| (result_ft < 0 && result_orig < 0) 
			|| (result_ft > 0 && result_orig > 0))
        printf("Test réussi : ft_memcmp et memcmp sont ok.\n");
    else
        printf("Test échoué : ft_memcmp et memcmp sont pas ok.\n");

    return 0;
}
*/