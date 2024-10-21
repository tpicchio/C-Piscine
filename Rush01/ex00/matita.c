/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matita.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 10:48:49 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/21 10:48:51 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check3_1(char *argv[], int mat[4][4]);

void	ft_init123(int mat[4][4])
{
	int	i = 0;
	int	j = 0;
	
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (mat[i][j] == 0)
			{
				mat[i][j] = 123;
			} 
			j++;		
		}
		i++;
	}
}

void	ft_check_all(int mat[4][4], int i, int j)
{
	int	k;
	
	k = j;
	j = 0;
	while (j < 4)
	{
		if (mat[i][j] == 123)
			mat[i][j] = 12;
		j++;
	}
	i = 0;
	while (i < 4)
	{
		if (mat[i][k] == 123)
			mat[i][k] = 12;
		i++;
	}
}

void	ft_check3(char *argv[], int mat[4][4])
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (mat[i][j] == 3)
			{
				ft_check_all(mat, i, j);
			}
			j++;
		}
		i++;
	}
}

void	ft_matita(char *argv[], int mat[4][4])
{
	ft_init123(mat);
	ft_check3(argv, mat);
	ft_check3_1(argv, mat);
}
