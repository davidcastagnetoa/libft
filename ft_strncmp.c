/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:41:07 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/04 22:00:46 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return (0);
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

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	const char	*s1;
	const char	*s2;
	int			n;
	size_t		l;

	if (argc != 2)
	{
		write(2, "Error: It's required 1 valid argument!\n", 39);
		return (0);
	}
	l = atoi(argv[1]);
	if (l <= 0)
	{
		write(2, "Error: Argument must be a positive number!\n", 43);
		return (0);
	}
	s1 = "Hola";
	s2 = "Holanda";
	n = ft_strncmp(s1, s2, l);
	ft_putnbr(n);
	write(1, "\n", 1);
	return (0);
}
*/