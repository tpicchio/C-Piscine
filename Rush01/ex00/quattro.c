/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:47:06 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/20 11:47:07 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putmat(int mat[4][4]);
void	ft_uno(char *argv[], int mat[4][4]);

void	col_up(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 0 && i <= 7)
	{
		if (argv[1][i] == '4')
		{
			mat[0][j] = 1;
			mat[1][j] = 2;
			mat[2][j] = 3;
			mat[3][j] = 4;
		}
	}
}

void	col_down(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 8 && i <= 15)
	{
		if (argv[1][i] == '4')
		{
			mat[3][j - 4] = 1;
			mat[2][j - 4] = 2;
			mat[1][j - 4] = 3;
			mat[0][j - 4] = 4;
		}
	}
}

void	row_left(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 16 && i <= 23)
	{
		if (argv[1][i] == '4')
		{
			mat[j - 8][0] = 1;
			mat[j - 8][1] = 2;
			mat[j - 8][2] = 3;
			mat[j - 8][3] = 4;
		}
	}
}

void	row_right(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 24 && i < 31)
	{
		if (argv[1][i] == '4')
		{
			mat[j - 12][0] = 1;
			mat[j - 12][1] = 2;
			mat[j - 12][2] = 3;
			mat[j - 12][3] = 4;
		}
	}
}

void	ft_quattro(char *argv[], int mat[4][4])
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 31)
	{
		col_up(argv, mat, i, j);
		col_down(argv, mat, i, j);
		row_left(argv, mat, i, j);
		row_right(argv, mat, i, j);
		j++;
		i = i + 2;
	}
	ft_uno(argv, mat);
	ft_putmat(mat);
}
