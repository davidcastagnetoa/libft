/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:06:29 by dacastag          #+#    #+#             */
/*   Updated: 2025/01/20 22:43:15 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Check if the given character is a printable character (32 - 126)

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	num = ft_isprint(argv[1][0]);
	result = num + '0';
	write(1, &result, 1);
	write(1, "\n", 1);
	return (0);
}
*/
