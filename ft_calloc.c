/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:48:35 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 00:31:53 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	char	*ptr;
	size_t	i;

	total_size = nmemb * size;
	ptr = (char *)malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
/*
int main(int argc, char *argv[])
{
	int     *arr;
	size_t  n;
	size_t  i;
	char	c;

	if (argc != 2)
	{
		write(2, "Error: It's required 1 valid argument!\n", 39);
		return (1);
	}
	n = atoi(argv[1]);
	if (n <= 0)
	{
		write(2, "Error: Argument must be a positive number!\n", 43);
		return (1);
	}
	arr = (int *)ft_calloc(n, sizeof(int));
	if (!arr)
	{
		write(2, "Error: Memory allocation failed\n", 32);
		return (1);
	}
	i = 0;
	while (i < n)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
	}
	free(arr);
	return (0);
}
*/