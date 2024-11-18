/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:37:30 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/13 15:29:39 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nbr;

	sign = 1;
	i = 0;
	nbr = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if ((str[i] == '+' || str[i] == '-') && (str[i] - 1 != '+' || \
			str[i] - 1 != '-'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}
/*
int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", atoi(av[1]));
		printf("%d\n", ft_atoi(av[1]));
	}
	return (0);
}
*/