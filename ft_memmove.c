/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 00:04:00 by dacastag          #+#    #+#             */
/*   Updated: 2025/01/22 02:44:08 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// If the ptr_dst position(pen) is futher away than ptr_src(finger), we have to
// copy it in reverse (line 27), else we copy in forward. Fist we're move 'n'
// position forward in both pointer before to write in reverse (line 30, 31).
// Then, write, move down one position in dest(pen) and src()finger and reduce 
// the counter by one .
// Use gcc -Wall -Wextra -Werror ft_memmove.c ft_memcpy.c -o ft_memmove to test

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *buffer_dest, const void *buffer_src, size_t n)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	if (!buffer_dest && !buffer_src)
		return (NULL);
	ptr_dst = (unsigned char *)buffer_dest;
	ptr_src = (const unsigned char *)buffer_src;
	if (ptr_dst > ptr_src)
	{
		ptr_dst += n;
		ptr_src += n;
		while (n)
		{
			ptr_dst--;
			ptr_src--;
			*ptr_dst = *ptr_src;
			n--;
		}
	}
	else
		ft_memcpy(buffer_dest, buffer_src, n);
	return (buffer_dest);
}
/*
#include "libft.h"
#include <unistd.h>

int main(void)
{
	char str1[12] = "ABCDEFGHIJK";  // 11 characters + '\0'
	char str2[12] = "ABCDEFGHIJK";  // to compare

	write(1, "Original str1: ", 15);
	write(1, str1, 11); 
	write(1, "\n", 1);

	write(1, "Original str2: ", 15);
	write(1, str2, 11);
	write(1, "\n", 1);

	// Apply ft_memmove in str1, copying 8 bytes of str1[0..7] to str1[3..10]
	ft_memmove(str1 + 3, str1, 8);

	// Apply ft_memcpy in str2, copying 8 bytes of str1[0..7] to str1[3..10]
	ft_memcpy(str2 + 3, str2, 8);

	write(1, "After of ft_memmove in str1: ", 30);
	write(1, str1, 11);
	write(1, "\n", 1);
	write(1, "After of ft_memcpy in str2: ", 29);
	write(1, str2, 11);
	write(1, "\n", 1);

	return 0;
}
*/
