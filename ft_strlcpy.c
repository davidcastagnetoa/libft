/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:57:47 by dacastag          #+#    #+#             */
/*   Updated: 2025/01/29 00:30:56 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copy the string (src) to another string (dst) with a maximun size (dsize).
// If the length size (dsize) is not 0:
// Copy to [dsize - 1] character of src to dst.
// make sure that dst finish with '\0'.
// Return the length of src.
// Use to test: gcc -Wall -Wextra -Werror ft_strlcpy.c ft_strlen.c -o a.out

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dsize != 0)
	{
		i = 0;
		while (src[i] != '\0' && i < dsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	const 	char *str_source = "Hello World";
	char    str_dest[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	size_t	buffer_size;

	if(argc != 2)
	{
		write(2, "It's required 1 valid argument!\n", 31);
		return (0);
	}
	buffer_size = atoi(argv[1]);
	if(buffer_size <= 0)
	{
		write(2, "Error: Size must be a positive number!\n", 39);
		return (0);
	}
	ft_strlcpy(str_dest, str_source, buffer_size);
	write(1, "Destiny: ", 9);
	write(1 , str_dest, 12);
	return(0);
}
*/