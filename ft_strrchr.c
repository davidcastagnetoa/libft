/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:25:08 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/02 22:40:46 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	c = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == c)
			last = s;
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last);
}
/*
#include <unistd.h>

int main()
{
	const char  *s;
	char        *new;

	s = "Hello there!";
	new = ft_strrchr(s, 'e');
	write(1, new, 6);
	return (0);
}
*/