/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 00:29:16 by dacastag          #+#    #+#             */
/*   Updated: 2025/01/29 01:05:19 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
/*
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int     result;
	int     character;
	char    c;

	if (argc != 2)
	{
		write(2, "It's required 1 valid argument!\n", 31);
		return (0);
	}
	character = atoi(argv[1]);
	c = (char)character;
	write(1, "Character Before: ", 18);
	write(1, &c, 1);
	write(1, "\n", 1);
	result = ft_toupper(character);
	write(1, "Character After: ", 17);
	c = (char)result;
	write(1, &c, 1);
	return 0;
}
*/