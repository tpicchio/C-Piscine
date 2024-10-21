/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check3_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:30:35 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/21 11:30:36 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check123(char *argv[], int mat[4][4]);

void	col3_up(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 0 && i <= 7)
	{
		if (argv[1][i] == '3' && mat[0][j] == 123)
		{
			mat[0][j] = 12;
		}
	}
}

void	col3_down(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 8 && i <= 15)
	{
		if (argv[1][i] == '3' && mat[3][j - 4] == 123)
		{
			mat[3][j - 4] = 12;
		}
	}
}

void	row3_left(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 16 && i <= 23 && mat[j - 8][0] == 123)
	{
		if (argv[1][i] == '3')
		{
			mat[j - 8][0] = 12;
		}
	}
}

void	row3_right(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 24 && i < 31)
	{
		if (argv[1][i] == '3' && mat[j - 12][0] == 123)
		{
			mat[j - 12][3] = 12;
		}
	}
}

void	ft_check3_1(char *argv[], int mat[4][4])
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (i < 31)
	{
		col3_up(argv, mat, i, j);
		col3_down(argv, mat, i, j);
		row3_left(argv, mat, i, j);
		row3_right(argv, mat, i, j);
		j++;
		i = i + 2;
	}
	ft_check123(argv, mat);
}
