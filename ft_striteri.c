/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 03:00:05 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 03:03:32 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// cc -g -Wall -Wextra -Werror ft_striteri.c ft_toupper.c -o a.out
// Applies  `f` to each character of `s`, passing its index as an argument.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_toupper_iter(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

int	main(void)
{
	char	*s;

	s = malloc(1024);
	s[0] = 'h';
	s[1] = 'e';
	s[2] = 'l';
	s[3] = 'l';
	ft_striteri(s, ft_toupper_iter);
	write(1, s, 5);
	free(s);
	return (0);
}
*/