/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 02:21:41 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 02:26:06 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// cc -g -Wall -Wextra -Werror ft_strjoin.c ft_strlen.c -o a.out
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3 = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	i = 0;
	while (i < (s1_len + s2_len))
	{
		if (i < s1_len)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - s1_len];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
/*
#include <unistd.h>

int main(void)
{
	const char	*s1;
	const char	*s2;
	char		*dup;

	s1 = "hello wo";
	s2 = "rldl!";
	dup = ft_strjoin(s1, s2);
	write(1, dup, 16);
	return (0);
}
*/