/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 03:07:48 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 03:09:50 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Writes the string `s` to the file descriptor `fd`.
// cc -g -Wall -Wextra -Werror ft_putstr_fd.c ft_strlen.c -o a.out
// To test: create a file: a.txt before to run

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("a.txt", O_WRONLY);
	ft_putstr_fd("hello", fd);
	close(fd);
	return (0);
}
*/