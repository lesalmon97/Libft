/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:29:50 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 16:40:37 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char str[] = "Hello, world!";
    int c = 'o';
    size_t n = 13;
    char *result_ft = (char *)ft_memchr(str, c, n);
    if (result_ft != NULL)
        printf("ft_memchr: caractère trouvé.\n");
    else
        printf("ft_memchr: caractère pas trouvé.\n");
    char *result_orig = (char *)memchr(str, c, n);
    if (result_orig != NULL)
        printf("memchr: caractère trouvé\n");
    else
        printf("memchr: caractère pas trouvé.\n");
    if (result_ft == result_orig)
        printf("Test réussi : ft_memchr et memchr ok.\n");
    else
        printf("Test échoué : ft_memchr et memchr pas ok.\n");
    return 0;
}
*/