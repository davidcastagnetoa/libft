/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:39:23 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/04 22:00:23 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;
b
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char *argv [])
{
	const void	*s1;
	const void	*s2;
	size_t		n;
	int			result;

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
	s1 = "Hola";
	s2 = "HolA";
	result = ft_memcmp(s1, s2, n);
	ft_putnbr(result);
	return (0);
}
*/