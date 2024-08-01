/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:43:53 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/28 20:59:12 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "rush02.h"

int	main(int argc, char **argv)
{
	char	*dict_filename;
	char	*number_str;

	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	dict_filename = "dict/numbers.dict";
	number_str = NULL;
	atr_dict(&dict_filename, &number_str, argc, argv);
	if (!ft_str_is_numeric(number_str))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_putstr(number_str);
	write(1, "\n", 1);
	if (read_file(dict_filename))
	{
		return (1);
	}
	return (0);
}

void	atr_dict(char **dict_filename, char **number_str, int argc, char **argv)
{
	if (argc == 2)
		*number_str = argv[1];
	else
	{
		*dict_filename = argv[1];
		*number_str = argv[2];
	}
}
