/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 02:44:25 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 02:49:37 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_num_len: Calculates the length of the integer `n` when represented as 
// a string.
// ft_fill_str: Fills `str` with the character digits of `n` based on its 
// length and sign.
// ft_itoa: Converts the integer `n` to its string representation.
// cc -g -Wall -Wextra -Werror ft_itoa.c ft_strdup.c -o a.out
#include "libft.h"
#include <limits.h>

int	ft_num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == INT_MIN)
		return (11);
	if (n < 0)
	{
		len = 1;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	ft_fill_str(char *str, int n, int len, int sign)
{
	if (sign == -1)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = ft_num_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	sign = 1;
	if (n < 0)
		sign = -1;
	ft_fill_str(str, n, len, sign);
	return (str);
}
/*
#include <unistd.h>

int	main(void)
{
	char	*str;

	str = ft_itoa(-17);
	write(1, str, 3);
	return (0);
}
*/