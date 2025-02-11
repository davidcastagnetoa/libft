/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 02:35:39 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 02:44:05 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_allocate_result: Allocates memory for each substring in the result array.
// ft_split_parse: Splits the string into substrings up to `max_words` and
// allocates memory
// ft_split: Splits the string `s` into an array of substrings, separated by `c`

#include "libft.h"

char	**ft_allocate_result(char **result, size_t s_word, size_t len)
{
	result[s_word] = malloc((len + 1) * sizeof(char));
	if (!result[s_word])
	{
		while (s_word > 0)
		{
			s_word--;
			free(result[s_word]);
		}
		free(result);
		return (NULL);
	}
	return (result);
}

char	**ft_split_parse(size_t max_words, char **result, char const *s, char c)
{
	size_t	s_word;
	size_t	i;
	size_t	j;

	s_word = -1;
	i = 0;
	while (++s_word < max_words)
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j])
			j++;
		if (!(ft_allocate_result(result, s_word, j)))
			return (NULL);
		j = 0;
		while (s[i + j] != c && s[i + j] != '\0')
		{
			result[s_word][j] = s[i + j];
			j++;
		}
		result[s_word][j] = '\0';
		i += j;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	max_words;
	size_t	i;
	char	**result;

	if (!s)
		return (NULL);
	max_words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			max_words++;
		i++;
	}
	result = malloc((max_words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = ft_split_parse(max_words, result, s, c);
	if (!result)
		return (NULL);
	result[max_words] = NULL;
	return (result);
}
/*
int	main(void)
{
	char const	*string;
	char		cutter;
	char		**splitted;
	int			i;

	string = "Hello_Coder_Welcome_Home";
	cutter = '_';
	splitted = ft_split(string, cutter);
	i = 0;
	while (splitted[i])
	{
		write(1, splitted[i], 8);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
*/