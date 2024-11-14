/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesalmon <lesalmon@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:46:33 by lesalmon          #+#    #+#             */
/*   Updated: 2024/11/14 16:51:10 by lesalmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*get_word(char const *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	word = ft_substr(s, 0, len);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t	i;

	i = 0;
	word_count = count_words(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (result == NULL || s == NULL)
		return (NULL);
	while (i < word_count)
	{
		while (*s != '\0' && *s == c)
			s++;
		result[i] = get_word(s, c);
		if (result[i] == NULL)
		{
			while (i > 0)
				free(result[--i]);
		}
		s = s + ft_strlen(result[i]);
		i++;
	}
	result[i] = NULL;
	return (result);
}
/*
void free_split(char **split) {
    size_t i = 0;
    while (split[i]) {
        free(split[i]);
        i++;
    }
    free(split);
}

int main() {
    char *str = "Hello World! Welcome to C programming.";
    char delimiter = ' ';
    char **split = ft_split(str, delimiter);

    if (split == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    for (size_t i = 0; split[i] != NULL; i++) {
        printf("Word %zu: %s\n", i + 1, split[i]);
        free(split[i]);
    }

    free(split);
    return 0;
}
*/