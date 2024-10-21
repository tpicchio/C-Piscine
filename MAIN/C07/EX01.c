/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:06:57 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/26 10:06:58 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	*ft_range(int min, int max);

int main()
{
	int	min = 10;
	int	max = 39;
	int	*vet = ft_range(min, max);
	int	i;
	int	size = max - min;
	
	i = 0;
	while (i < size)
	{
		printf("%d ", vet[i]);
		i++;
	}
	return 0;
}
