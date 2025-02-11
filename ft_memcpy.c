/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:47:33 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 03:36:26 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *buffer_dest, const void *buffer_src, size_t n)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;
	size_t				i;

	if (n == 0)
		return (buffer_dest);
	if (!buffer_dest && !buffer_src)
		return (NULL);
	ptr_dst = (unsigned char *)buffer_dest;
	ptr_src = (const unsigned char *)buffer_src;
	i = 0;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (buffer_dest);
}
/*
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*buffer_dest;
	char	buffer_src[] = "Hello World";
	size_t	limit;

	if(argc != 2)
	{
		write(2, "It's required 1 valid argument!", 31);
		return (0);
	}

	limit = atoi(argv[1]);
	if (limit <= 0)
	{
		write(2, "Error: limit must be a positive number!", 40);
		return (0);
	}
	buffer_dest = (char *)malloc(11 + 1);
	if (!buffer_dest)
	{
		write(2, "Error: Memory allocation failed!", 32);
		return (0);
	}
	ft_memcpy(buffer_dest, buffer_src, limit);
	buffer_dest[11] = '\0';
	write(1, buffer_dest, 11);
	write(1, "\n", 1);
	free(buffer_dest);
	return (0);
}
*/