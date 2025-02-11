/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 22:51:25 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/05 20:57:24 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Concatenate (Join) ione string to the end of another.
// Add the characters of src string at the end of dst string
// Limit the quantity of characters that add at the end in function of dsize
// Make sure that dst string finish with '\0'
// Calculate the current length of dst (dst_len).
// Determines how much space is available in dst (dsize - dst_len - 1).
// Copy up to that many characters from src to the end of dst.
// End dst with '\0'.
// Returns the length that the final string would have if dsize were what 
// big enough.
// Use to test: gcc -Wall -Wextra -Werror ft_strlcat.c ft_strlen.c -o a.out

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	size_t	max_cpy;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dsize == 0 || dsize <= dst_len)
		return (dsize + src_len);
	max_cpy = dsize - dst_len - 1;
	i = 0;
	while (src[i] != '\0' && i < max_cpy)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(size_t n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	const	char *str_source = "World";
	char	str_dest[12] = "Hello ";
	size_t	buffer_size;
	size_t	result;

	if(argc != 2)
	{
		write(2, "Error: It's required 1 valid argument!\n", 39);
		return (0);
	}
	buffer_size = atoi(argv[1]);
	if (buffer_size == 0)
	{
		write(2, "Error: Size must be a positive number!\n", 39);
		return (0);
	}
	if (buffer_size <= ft_strlen(str_dest)) {
		write(2, "Error: Buffer size is too small for concatenation!\n", 50);
		return (0);
	}
	write(1, "Source: ", 8);
	write(1, str_source, ft_strlen(str_source));
	write(1, "\n", 1);
	result = ft_strlcat(str_dest, str_source, buffer_size);
	write(1, "Destiny (after ft_strlcat): ", 28);
	write(1 , str_dest, ft_strlen(str_dest));
	write(1, "\n", 1);
	write(1, "Length of final string: ", 24);
	ft_putnbr(result);
	write(1, "\n", 1);
	return (0);
}
*/