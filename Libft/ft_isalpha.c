/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:29:03 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 16:22:08 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	else
		return (0);
}
/*
int main ()
{
	int c = '?';

	printf("%d\n", ft_isalpha(c));
	return (0);
}*/