/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tre.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:37:51 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/20 15:37:53 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_matita(char *argv[], int mat[4][4]);

void	col_3up(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 0 && i <= 7)
	{
		if (argv[1][i] == '3' && argv[1][i + 8] == '2')
		{
			mat[2][j] = 4;
		}
	}
}

void	col_3down(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 8 && i <= 15)
	{
		if (argv[1][i] == '3' && argv[1][i + 8] == '2')
		{
			mat[1][j - 4] = 4;
		}
	}
}

void	row_3left(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 16 && i <= 23)
	{
		if (argv[1][i] == '3' && argv[1][i + 8] == '2')
		{
			mat[j - 8][2] = 4;
		}
	}
}

void	row_3right(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 24 && i < 31)
	{
		if (argv[1][i] == '3' && argv[1][i - 8] == '2')
		{
			mat[j - 12][1] = 4;
		}
	}
}

void	ft_tre(char *argv[], int mat[4][4])
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 31)
	{
		col_3up(argv, mat, i, j);
		col_3down(argv, mat, i, j);
		row_3left(argv, mat, i, j);
		row_3right(argv, mat, i, j);
		j++;
		i = i + 2;
	}
	ft_matita(argv, mat);
}
