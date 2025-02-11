/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 03:12:21 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 03:17:38 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Writes the integer `n` to the file descriptor `fd`.
// cc -g -Wall -Wextra -Werror ft_putnbr_fd.c -o a.out
// To test: create a file: a.txt before to run

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	write(fd, &"0123456789"[n % 10], 1);
}
/*
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("a.txt", O_WRONLY);
	ft_putnbr_fd(-42, fd);
	close(fd);
	return (0);
}
*/