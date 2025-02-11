/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 00:32:38 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 03:37:04 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;
	size_t	size;

	size = 0;
	while (s[size] != '\0')
		size ++;
	ptr = malloc(size + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[size] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	const char	*string;
	char		*new_string;

	string = "Hello World";
	new_string = ft_strdup(string);
	write(1, new_string, 11);
	write(1, "\n", 1);
	free(new_string);
	return (0);
}
*/