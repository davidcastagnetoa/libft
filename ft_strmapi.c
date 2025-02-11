/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 02:49:52 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 02:59:47 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// cc -g -Wall -Wextra -Werror ft_strmapi.c ft_toupper.c -o a.out
// ft_strmapi: Applies `f` to each character of `s` and returns a new string.
// in this case apply the ft_toupper_iter function to s (main)

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
		len++;
	new_str = malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
char	ft_toupper_iter(unsigned int i, char c)
{
	(void)i;
	return ((char)ft_toupper(c));
}

int	main(void)
{
	char const	*s;
	char		*upper_str;

	s = "hello";
	upper_str = ft_strmapi(s, ft_toupper_iter);
	write(1, upper_str, 5);
	return (0);
}
*/