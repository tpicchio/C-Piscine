/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uno.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:49:42 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/20 14:49:43 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tre(char *argv[], int mat[4][4]);

void	col_1up(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 0 && i <= 7)
	{
		if (argv[1][i] == '1')
		{
			mat[0][j] = 4;
		}
		if (argv[1][i] == '1' && argv[1][i + 8] == '2')
		{
			mat[3][j] = 3;
		}
	}
}

void	col_1down(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 8 && i <= 15)
	{
		if (argv[1][i] == '1')
		{
			mat[3][j - 4] = 4;
		}
		if (argv[1][i] == '1' && argv[1][i - 8] == '2')
		{
			mat[0][j - 4] = 3;
		}
	}
}

void	row_1left(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 16 && i <= 23)
	{
		if (argv[1][i] == '1')
		{
			mat[j - 8][0] = 4;
		}
		if (argv[1][i] == '1' && argv[1][i + 8] == '2')
		{
			mat[j - 8][3] = 3;
		}
	}
}

void	row_1right(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 24 && i < 31)
	{
		if (argv[1][i] == '1')
		{
			mat[j - 12][3] = 4;
		}
		if (argv[1][i] == '1' && argv[1][i - 8] == '2')
		{
			mat[j - 12][0] = 3;
		}
	}
}

void	ft_uno(char *argv[], int mat[4][4])
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 31)
	{
		col_1up(argv, mat, i, j);
		col_1down(argv, mat, i, j);
		row_1left(argv, mat, i, j);
		row_1right(argv, mat, i, j);
		j++;
		i = i + 2;
	}
	ft_tre(argv, mat);
}
