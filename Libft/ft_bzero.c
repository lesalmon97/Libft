/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:28:50 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 15:04:22 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return ;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*
int main(void)
{
    char    test[] = "Hello, world!";
    size_t  n = 5;

    printf("Avant ft_bzero : %s\n", test);

    ft_bzero(test, n);

    printf("Après ft_bzero (n = %zu) : ", n);
    for (size_t i = 0; i < sizeof(test); i++)
    {
        printf("%02x ", (unsigned char)test[i]);
    }
    printf("\n");

    return 0;
}
*/