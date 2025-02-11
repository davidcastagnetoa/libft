/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 01:50:18 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 02:20:28 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Use to test: cc -g -Wall -Wextra -Werror ft_substr.c ft_calloc.c -o a.out

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	s_len;
	size_t	i;

	s_len = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[s_len])
		s_len++;
	if (start >= s_len)
		return (ft_calloc(1, sizeof(char)));
	if (len > (s_len - start))
		len = s_len - start;
	sub_str = malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	while (i < len && (start + i) < s_len)
	{
		sub_str[i] = s[i + start];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*
#include <unistd.h>

int	main(void)
{
	char const		*string;
	char			*sub_string;
	unsigned int	start;
	size_t			length;

	string = "hello world";
	start = 2;
	length = 2;
	sub_string = ft_substr(string, start, length);
	if (sub_string)
	{
		write(1, sub_string, length);
		write(1, "\n", 1);
		free(sub_string);
	}
	return (0);
}
*/