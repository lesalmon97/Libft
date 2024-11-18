/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:38:22 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 16:36:06 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	c;

	c = 0;
	res = malloc(count * size);
	if (res == NULL)
		return (NULL);
	while (c < count * size)
	{
		((char *)res)[c] = 0;
		c++;
	}
	return (res);
}
/*
int main(void)
{
    size_t count = 5;
    size_t size = sizeof(int);
    int *ft_mem = (int *)ft_calloc(count, size);
    if (ft_mem == NULL) {
        printf("Erreur : ft_calloc n'a pas réussi à allouer de la mémoire.\n");
        return 1;
    }
    int *orig_mem = (int *)calloc(count, size);
    if (orig_mem == NULL) {
        printf("Erreur : calloc n'a pas réussi à allouer de la mémoire.\n");
        free(ft_mem);
        return 1;
    }
    printf("Contenu de la mémoire allouée par ft_calloc :\n");
    for (size_t i = 0; i < count; i++) {
        printf("%d ", ft_mem[i]);
    }
    printf("\n");
    printf("Contenu de la mémoire allouée par calloc :\n");
    for (size_t i = 0; i < count; i++) {
        printf("%d ", orig_mem[i]);
    }
    printf("\n");
    if (memcmp(ft_mem, orig_mem, count * size) == 0) {
        printf("Test réussi : ft_calloc et calloc ok.\n");
    } else {
        printf("Test échoué : ft_calloc et calloc pas ok.\n");
    }
    free(ft_mem);
    free(orig_mem);

    return 0;
}*/
