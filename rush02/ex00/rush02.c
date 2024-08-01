/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:40:30 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/28 20:55:40 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "rush02.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

unsigned long long int	ft_atoi(char *str)
{
	unsigned long long int	nbr;

	nbr = 0;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr);
}

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (! (*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int	read_file(char *filename)
{
	ssize_t	bytes_read;
	char	buffer[1024];
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	bytes_read = read (fd, buffer, (sizeof(buffer) - 1));
	while ((bytes_read - 1) > 0)
	{
		buffer[bytes_read] = '\0';
		ft_putstr(buffer);
		bytes_read = read (fd, buffer, (sizeof(buffer) - 1));
	}
	if (bytes_read == -1)
		write(1, "Dict Error\n", 11);
	if (close(fd) == -1)
		write(1, "Dict Error\n", 11);
	return (0);
}
