/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:20:11 by dacastag          #+#    #+#             */
/*   Updated: 2025/01/20 21:31:35 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Check if the given character is a alphanumeric character

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 48 && c <= 57)
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
	num = ft_isalnum(argv[1][0]);
	result = num + '0';
	write(1, &result, 1);
	write(1, "\n", 1);
	return (0);
}
*/
