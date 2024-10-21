/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:26:40 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/26 11:26:41 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min < max)
	{
		size = max - min;
		*range = (int *)malloc(sizeof(int) * size);
		if (!(*range))
			return (-1);
		i = 0;
		while (i < size)
		{
			(*range)[i] = min + i;
			i++;
		}
		return (size);
	}
	else
	{
		*range = 0;
		return (0);
	}
}
