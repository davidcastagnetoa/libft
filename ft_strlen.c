/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:06:29 by dacastag          #+#    #+#             */
/*   Updated: 2025/01/21 00:53:10 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Calculates the length of the string s, excluding the terminating null byte

#include "libft.h"
#include <stddef.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <unistd.h>

void	ft_putnbr(size_t n)
{
	char	c;

	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	size_t		num;

	if (argc != 2)
	{
		write(2, "It's required 1 valid argument!", 31);
		return (0);
	}
	num = ft_strlen(argv[1]);
	ft_putnbr(num);
	write(1, "\n", 1);
	return (0);
}
*/