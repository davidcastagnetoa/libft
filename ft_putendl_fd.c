/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 03:10:06 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 03:12:08 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Writes the string `s` followed by a newline character to the file descriptor.
// cc -g -Wall -Wextra -Werror ft_putendl_fd.c ft_strlen.c -o a.out
// To test: create a file: a.txt before to run

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("a.txt", O_WRONLY);
	ft_putendl_fd("hello", fd);
	close(fd);
	return (0);
}
*/