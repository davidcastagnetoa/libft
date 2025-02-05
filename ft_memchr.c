/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 00:16:19 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/04 21:34:26 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;

	i = 0;
	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == to_find)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(int argc, char * argv[])
{
	const void	*string;
	void		*sub_s;
	int			tofind;
	size_t		number;

	if (argc != 2)
	{
		write(2, "Error: It's required 1 valid argument!\n", 39);
		return (0);
	}
	string = "Hello World";
	tofind = 'l';
	number = atoi(argv[1]);
	if (number <= 0)
	{
		write(2, "Error: Argument must be a positive number!\n", 43);
		return (0);
	}
	sub_s = ft_memchr(string, tofind, number);
	write(1, sub_s, 12);
	return (0);
}
*/