/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:51:48 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/05 04:57:15 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *buffer, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)buffer;
	i = 0;
	while (i < n)
	{
		*ptr = '\0';
		ptr++;
		i++;
	}
}
/*
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	buffer[] = "Hello World";
	size_t	buffer_size;

	if (argc != 2)
	{
		write(2, "It's required 1 valid argument!", 31);
		return (0);
	}
	buffer_size = atoi(argv[1]);
	ft_bzero(buffer, buffer_size);
	write(1, buffer, 12);
	write(1, "\n", 1);
	return (0);
}
*/