/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:46:17 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 17:30:15 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	s_len;
	size_t	s2_len;
	char	*s2;

	if (s1 == NULL || set == NULL)
		return (NULL);
	s_len = ft_strlen((char *)s1);
	start = 0;
	while (start < s_len && ft_strchr(set, s1[start]) != NULL)
		start++;
	if (start == s_len)
		return (ft_strdup(""));
	end = s_len - 1;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	s2_len = end - start + 1;
	s2 = malloc(s2_len + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, (char *)s1 + start, s2_len + 1);
	return (s2);
}
/*
int main()
{
	char const *s1 = "xaxaxaxaokxaxaxaxokxaxaxaxaxa";
	char const *s2 = "xa";
	
	printf("%s\n", ft_strtrim(s1, s2));
	return (0);
}
*/