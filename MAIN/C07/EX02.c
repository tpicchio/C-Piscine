/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:26:49 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/26 11:26:51 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main()
{
	int	*range = 0;
	int	min = 50;
	int	max = 40;
	int	size;
	int	i;
	
	size = ft_ultimate_range(&range, min, max);
	i = 0;
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
}
