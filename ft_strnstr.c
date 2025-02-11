/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 00:29:02 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/05 20:44:11 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Use to test: cc -g -Wall -Wextra -Werror ft_strnstr.c ft_strlen.c -o a.out
#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < n && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < n)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	size_t		n;
	char		*result;
	const char	*big_string;
	const char	*small_string;

	big_string = "Hello World!";
	small_string = "World!";
	if (argc != 2)
	{
		write(2, "Error: It's required 1 valid argument!\n", 39);
		return (0);
	}
	n = atoi(argv[1]);
	if (n <= 0)
	{
		write(2, "Error: Argument must be a positive number!\n", 43);
		return (0);
	}
	result = ft_strnstr(big_string, small_string, n);
	if (result)
		write(1, result, ft_strlen(result));
	else
		write(1, "Not found\n", 10);
	write(1, "\n", 1);
	return (0);
}
*/