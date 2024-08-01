/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:14:19 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/14 16:38:01 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int x, int y);

int	char_to_int(const char *string)
{
	int	result;
	int	negative;

	result = 0;
	negative = 1;
	while (*string)
	{
		if (*string < '0' || *string > '9')
			negative = -1;
		else
			result = result * 10 + (*string - '0');
		string++;
	}
	return (result * negative);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write (1, "Insert two arguments\n", 21);
		return (1);
	}
	else
	{
		x = char_to_int(argv[1]);
		y = char_to_int(argv[2]);
		if (x <= 0 || y <= 0)
		{
			write (1, "Insert integer > 0\n)", 19);
			return (2);
		}
		else
			rush00 (x, y);
	}
	return (0);
}
