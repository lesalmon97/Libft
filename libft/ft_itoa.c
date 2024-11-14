/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:47:13 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 16:24:58 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	fill_result(int len, int start, int n, char *result)
{
	while (len > start)
	{
		result[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		start;
	int		len;
	char	*result;

	start = 0;
	len = get_len(n);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (result == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		result[0] = '-';
		result[1] = '2';
		n = 147483648;
		start = 2;
	}
	if (n < 0)
	{
		result[0] = '-';
		start = 1;
		n = -n;
	}
	fill_result(len, start, n, result);
	result[len] = '\0';
	return (result);
}
/*
int main ()
{
	int n = 1233445;

	printf("%s\n", ft_itoa(n));
	return (0);
}
*/