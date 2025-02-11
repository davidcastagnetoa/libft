/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 02:26:17 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 02:35:16 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// cc -g -Wall -Wextra -Werror ft_strtrim.c ft_strchr.c ft_strlen.c 
// ft_calloc.c -o a.out

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str_trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	if (start >= end)
		return (ft_calloc(1, sizeof(char)));
	end--;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	str_trimmed = malloc((end - start + 2) * sizeof(char));
	if (!str_trimmed)
		return (NULL);
	i = -1;
	while (start + ++i <= end)
		str_trimmed[i] = s1[start + i];
	str_trimmed[i] = '\0';
	return (str_trimmed);
}
/*
#include <unistd.h>

int	main(void)
{
	char const	*s1;
	char const	*set;
	char		*new;

	s1 = "hoHello Worldho";
	set = "ho";
	new = ft_strtrim(s1, set);
	write(1, new, 16);
	return (0);
}
*/