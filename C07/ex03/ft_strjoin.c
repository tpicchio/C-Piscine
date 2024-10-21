/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:34:24 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/29 10:34:25 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_num_char(char **strs, int size)
{
	int	cont;
	int	i;
	int	dim_str;

	cont = 0;
	dim_str = 0;
	while (cont < size)
	{
		i = 0;
		while (strs[cont][i])
		{
			dim_str++;
			i++;
		}
		cont++;
	}
	return (dim_str);
}

char	*ft_fill_strjoin(char **strs, char *sep, int size, char *strjoin)
{
	int	cont;
	int	dim_str;
	int	i;

	cont = 0;
	dim_str = 0;
	while (cont < size)
	{
		i = 0;
		while (strs[cont][i])
		{
			strjoin[dim_str] = strs[cont][i];
			i++;
			dim_str++;
		}
		i = 0;
		while (sep[i] && (cont + 1) != size)
		{
			strjoin[dim_str] = sep[i];
			dim_str++;
			i++;
		}
		cont++;
	}
	return (strjoin);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int		dim_str;
	int		sep_size;

	sep_size = 0;
	while (sep[sep_size])
		sep_size++;
	dim_str = ft_num_char(strs, size);
	sep_size = (size - 1) * sep_size + dim_str;
	strjoin = (char *)malloc(sizeof(char) * sep_size);
	strjoin = ft_fill_strjoin(strs, sep, size, strjoin);
	return (strjoin);
}
