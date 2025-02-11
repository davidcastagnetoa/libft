/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 03:03:53 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 03:07:30 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Writes the character `c` to the file descriptor `fd`.
// To test: create a file: a.txt before to run

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("a.txt", O_WRONLY);
	ft_putchar_fd('b', fd);
	close(fd);
	return (0);
}
*/