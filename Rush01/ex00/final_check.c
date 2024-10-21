/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:59:20 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/21 15:59:21 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_search_row(int mat[4][4], int i, int j)
{
	int	k;
	
	k = 0;
	while (k < 4)
	{
		if (mat[i][k] == 1)
		{
			if(mat[i][j] == 12)
				mat[i][j] = 2;
			break;
		}
		else if (mat[i][k] == 2)
		{
			if(mat[i][j] == 12)
				mat[i][j] = 1;
			break;
		}
		k++;
	}
}

void	ft_search_col(int mat[4][4], int k, int i)
{
	int	z;
	
	z = 0;
	while (z < 4)
	{
		if (mat[z][i] == 1)
		{
			if(mat[i][k] == 12)
				mat[i][k] = 2;
			break;
		}
		else if(mat[z][i] == 2)
		{
			if(mat[i][k] == 12)
				mat[i][k] = 1;
			break;
		}
		z++;
	}
}

void	ft_final_check(char *argv[], int mat[4][4])
{
	int	i;
	int	j;
	int	k;
	int	z;
	
	z = 0;
	while(z < 4)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (mat[i][j] == 12)
					ft_search_row(mat, i, j);
				j++;
			}
			k = 0;
			while (k < 4)
			{
				if (mat[i][k] == 12)
					ft_search_col(mat, k, i);
				k++;
			}
			i++;
		}
	z++;	
	}
}
