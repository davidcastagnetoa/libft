/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 01:05:17 by dacastag          #+#    #+#             */
/*   Updated: 2025/01/21 01:30:02 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *buffer, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)buffer;
	i = 0;
	while (i < len)
	{
		*ptr = (unsigned char)c;
		ptr++;
		i++;
	}
	return (buffer);
}
/*
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*buffer;
	size_t	buffer_size;

	if (argc != 2)
	{
		write(2, "It's required 1 valid argument!", 31);
		return (0);
	}
	// Convert the argument to a integer
	buffer_size = atoi(argv[1]);
	if (buffer_size <= 0)
	{
		write(2, "buffer_size must be a positive number!", 38);
		return (0);
	}
	// Reserve memory for the buffer
	buffer = (char *)malloc(buffer_size + 1);
	if (!buffer)
	{
		write(2, "Error: Memory allocation failed!", 32);
		return (0);
	}
	// Fill the buffer with the 'C' character
	ft_memset(buffer, 'C', buffer_size);
	// Add the null character at the end
	buffer[buffer_size] = '\0';
	write(1, buffer, buffer_size);
	write(1, "\n", 1);
	free(buffer);
	return (0);
}
*/
