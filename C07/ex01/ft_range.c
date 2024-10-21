/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:06:50 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/26 10:06:51 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*vet;
	int	i;
	int	size;

	size = max - min;
	if (size <= 0)
	{
		vet = (int *) malloc(sizeof(int));
		*vet = 0;
		return (vet);
	}
	i = 0;
	while (i < size)
	{
		vet[i] = min + i;
		i++;
	}
	return (vet);
}
