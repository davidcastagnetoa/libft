/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:28:45 by dacastag          #+#    #+#             */
/*   Updated: 2025/01/20 21:06:06 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Check if the given character is an alphabet letter

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
/*
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		num;
	char	result;

	if (argc != 2 || argv[1][0] == '\0')
	{
		write(2, "It's required 1 valid argument!", 31);		
		return (0);
	}
	num = ft_isalpha(argv[1][0]);
	result = num + '0';
	write(1, &result, 1);
	write(1, "\n", 1);
	return (0);
}
*/
