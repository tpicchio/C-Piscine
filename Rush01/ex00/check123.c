/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check123.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:55:58 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/21 11:55:59 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_check123(char *argv[], int mat[4][4]);
void	ft_check12(char *argv[], int mat[4][4]);

void	ft_check_row(char *argv[], int mat[4][4], int i)
{
	int	k;
	int	change;

	k = 0;
	change = 0;
	while (k < 4)
	{
		if (mat[i][k] == 123)
		{
			mat[i][k] = 12;
			change = 1;
		}
		k++;
	}
	if (change == 1)
		ft_check123(argv, mat);
}

void	ft_check_col(char *argv[], int mat[4][4], int pos)
{
	int	z;
	int	change;

	z = 0;
	change = 0;
	while (z < 4)
	{
		if (mat[z][pos] == 123)
		{
			mat[z][pos] = 12;
			change = 1;
		}
		z++;
	}
	if (change == 1)
		ft_check123(argv, mat);
}

void	ft_cancella3(char *argv[], int mat[4][4], int i, int pos)
{
	ft_check_row(argv, mat, i);
	ft_check_col(argv, mat, pos);
}

/*int	ft_dividi_ft(int mat[4][4], int *i, int *j, int *cont)
{
	int	pos;

	while (*j < 4)
	{
		if (mat[*i][*j] == 123)
		{
			*cont = *cont + 1;
			pos = *j;
		}
		*j++;
	}
	return (pos);
}*/

void	ft_check123(char *argv[], int mat[4][4])
{
	int	i;
	int	j;
	int	cont;
	int	pos;

	i = 0;
	j = 0;
	cont = 0;
	while (i < 4)
	{
		j = 0;
		cont = 0;
		while (j < 4)
		{
			if (mat[i][j] == 123)
			{
				cont = cont + 1;
				pos = j;
			}
			j++;
		}
		if (cont == 1)
		{
			mat[i][pos] = 3;
			ft_cancella3(argv, mat, i, pos);
		}
		i++;
	}
	ft_check12(argv, mat);
}
