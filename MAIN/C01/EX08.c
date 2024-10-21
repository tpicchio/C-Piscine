/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:21:26 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/15 14:22:02 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main()
{
	int vet[9] = {0,8,1,7,2,6,3,4,5};
	int i;
	
	i=0;
	printf("Vettore non ordinato: ");
	while(i < 9)
	{
		printf("%d",vet[i]);
		i++;
	}
	printf("\n");
	printf("Vettore ordinato: ");
	ft_sort_int_tab(vet,9);
	i=0;
	while(i < 9)
	{
		printf("%d",vet[i]);
		i++;
	}
	return 0;
}
