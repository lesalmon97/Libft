/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:29:45 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 16:21:51 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c < 127)
		return (1);
	else
		return (0);
}
/*
int main ()
{
	int c = '?';

	printf("%d\n", ft_isprint(c));
	return (0);
}*/