/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:06:29 by dacastag          #+#    #+#             */
/*   Updated: 2025/01/20 22:01:03 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Check is the given character is a valid ascii character (0-127)

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
# include <unistd.h>

int	main(int argc, char *argv[])
{
	int		num;
	char	result;

	if (argc != 2 || argv[1][0] == '\0')
	{
		write(2, "It's required 1 valid argument!", 31);
		return (0);
	}
	num = ft_isascii(argv[1][0]);
	result = num + '0';
	write(1, &result, 1);
	write(1, "\n", 1);
	return (0);
}
*/