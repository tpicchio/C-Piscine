/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:23:51 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/20 11:23:53 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_quattro(char *argv[], int mat[4][4]);

int	ft_ricerca2_3(char *argv[])
{
	int	i;
	
	i = 0;
	while(i < 31)
	{
		if(argv[1][i] == 1 || argv[1][i] == 4)
			return (0);
		i++;
	}
	return (1);
}

void	ft_azzera(int mat[4][4])
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while(i < 4)
	{
		j = 0;	
		while(j < 4)
		{
			mat[i][j] = 0;
			j++;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	int	size;
	int	check;
	int	mat[4][4];
	
	if(argc != 2)
		write(1, "Error", 5);
	else
	{
		size = 0;
		while(argv[1][size])
			size++;
		if(size != 31)
			return (0);	
		check = ft_ricerca2_3(argv);
		/*if(check == 1)
		{
			write(1, "Error", 5);
			return (0);
		}*/
		ft_azzera(mat);
		ft_quattro(argv, mat);
	}
	return (0);
}
