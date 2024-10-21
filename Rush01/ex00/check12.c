/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check12.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:28:45 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/21 14:28:47 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_final_check(char *argv[], int mat[4][4]);

void	col12_up(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 0 && i <= 7)
	{
		if (argv[1][i] == '3' && argv[1][i + 8] == '1' 
		&& mat[2][j] == 3 && mat[3][j] == 4)
		{
			if(mat[0][j] == 12 && mat[1][j] == 12)
			{	
				mat[0][j] = 2;
				mat[1][j] = 1;
			}		
		}
		else if(argv[1][i] == '3' && argv[1][i + 8] == '2' 
		&& mat[2][j] == 4 && mat[3][j] == 3)
		{
			if(mat[0][j] == 12 && mat[1][j] == 12)
			{
				mat[0][j] = 1;
				mat[1][j] = 2;
			}		
		}
	}
}

void	col12_down(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 8 && i <= 15)
	{
		if (argv[1][i] == '3' && argv[1][i - 8] == '1' 
		&& mat[1][j - 4] == 3 && mat[0][j - 4] == 4)
		{
			if(mat[2][j - 4] == 12 && mat[3][j - 4] == 12)
			{	
				mat[2][j - 4] = 1;
				mat[3][j - 4] = 2;
			}		
		}
		else if(argv[1][i] == '3' && argv[1][i - 8] == '2' 
		&& mat[1][j - 4] == 4 && mat[0][j - 4] == 3)
		{
			if (mat[2][j - 4] == 12 && mat[3][j - 4] == 12)
			{
				mat[2][j - 4] = 2;
				mat[3][j - 4] = 1;
			}	
		}
	}
}

void	row12_left(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 16 && i <= 23)
	{
		if (argv[1][i] == '3' && argv[1][i + 8] == '1' 
		&& mat[j - 8][2] == 3 && mat[j - 8][3] == 4)
		{
			if (mat[j - 8][0] == 12 && mat[j - 8][1] == 12)
			{
				mat[j - 8][0] = 2;
				mat[j - 8][1] = 1;
			}
		}
		else if (argv[1][i] == '3' && argv[1][i + 8] == '2' 
		&& mat[j - 8][2] == 4 && mat[j - 8][3] == 3)
		{
			if (mat[j - 8][0] == 12 && mat[j - 8][1] == 12)
			{
				mat[j - 8][0] = 1;
				mat[j - 8][1] = 2;
			}
		} 
	}
}

void	row12_right(char *argv[], int mat[4][4], int i, int j)
{
	if (i >= 24 && i <= 31)
	{
		if (argv[1][i] == '3' && argv[1][i - 8] == '1' 
		&& mat[j - 12][1] == 3 && mat[j - 12][0] == 4)
		{
			if (mat[j - 12][2] == 12 && mat[j - 12][3] == 12)
			{
				mat[j - 12][3] = 2;
				mat[j - 12][2] = 1;
			}
		}
		else if (argv[1][i] == '3' && argv[1][i - 8] == '2' 
		&& mat[j - 12][1] == 4 && mat[j - 12][0] == 3)
		{
			if (mat[j - 12][2] == 12 && mat[j - 12][3] == 12)
			{
				mat[j - 12][3] = 1;
				mat[j - 12][2] = 2;
			}
		} 
	}
}

void	ft_check12(char *argv[], int mat[4][4])
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while(i < 31)
	{
		col12_up(argv, mat, i, j);
		col12_down(argv, mat, i, j);
		row12_left(argv, mat, i, j);
		row12_right(argv, mat, i, j);
		j++;
		i = i + 2;
	}
	ft_final_check(argv, mat);
}
