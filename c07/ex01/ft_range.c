/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemorais <jemorais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:36:21 by jemorais          #+#    #+#             */
/*   Updated: 2024/08/01 16:32:38 by jemorais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*len;

	i = 0;
	scanf("%d", &min);
	scanf("%d", &max);
	len = ft_range(min, max);
	while (len[i])
	{
		printf("%d", len[i]);
		i++;
	}
	free(len);
	return (0);
}

int	*ft_range(int min, int max)
{
	int	*length;
	int	i;

	if (min >= max)
		return (NULL);
	length = malloc (((max - min) + 1) * sizeof(int));
	i = 0;
	while (min < max)
	{
		length[i] = min;
		min++;
		i++;
	}
	length[i] = '\0';
	return (length);
}
