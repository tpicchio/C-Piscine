/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:05:48 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/15 10:22:52 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

bool	ft_check_last(char vet[], int n)
{
	char	start;
	int		i;
	bool	check;

	i = n - 1;
	start = '9';
	check = true;
	while (i >= 0)
	{
		if (vet[i] != start)
			check = false;
		start--;
		i--;
	}
	write(1, vet, n);
	if (check == false)
		write(1, ", ", 2);
	return (check);
}

void	ft_fill_vet(char vet[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (i == 0)
			vet[0] = '0';
		else
			vet[i] = vet[i - 1] + 1;
		i++;
	}
}

int	ft_check_order(char vet[], int n)
{
	char	val;
	int		cont;
	int		pos;

	cont = n - 1;
	val = vet[cont];
	while (cont >= 0)
	{
		if (vet[cont] == val)
		{
			cont--;
			val--;
		}
		else
		{
			pos = cont;
			cont = -1;
		}
	}
	return (pos);
}

void	ft_body(char vet[], int n)
{
	bool	check;
	int		pos;
	int		val;

	check = ft_check_last(vet, n);
	while (check == false)
	{
		if (vet[n - 1] != '9')
			vet[n - 1]++;
		else
		{
			pos = ft_check_order(vet, n);
			val = vet[pos];
			while (pos < n)
			{
				vet[pos] = val + 1;
				val++;
				pos++;
			}
		}
		check = ft_check_last(vet, n);
	}
}

void	ft_print_combn(int n)
{
	char	vet[9];

	ft_fill_vet(vet, n);
	ft_body(vet, n);
}
