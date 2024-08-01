/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:43:59 by jemorais          #+#    #+#             */
/*   Updated: 2024/07/14 17:07:44 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00(int row, int col)
{
	int	i;
	int	j;

	i = 1;
	while (i <= row)
	{
		j = 1;
		while (j <= col)
		{
			if ((i == 1 && j == 1) || (i == row && j == 1)
				|| (i == 1 && j == col) || (i == row && j == col))
				ft_putchar('o');
			else if ((i == 1 && j != 1) || (i == row && j != 1))
				ft_putchar('-');
			else if ((i != 1 && j == 1) || (i != row && j == col))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
