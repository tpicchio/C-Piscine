/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:47:01 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/30 09:47:02 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_count_word(char *str)
{
	int	num_word;
	int	cont_str;

	num_word = 0;
	cont_str = 0;
	while (str[cont_str])
	{
		if (str[cont_str] != ' ' && str[cont_str] != '\n'
			&& str[cont_str] != '\t')
		{
			while (str[cont_str] != ' ' && str[cont_str] != '\n'
				&& str[cont_str] != '\t' && str[cont_str])
				cont_str++;
			num_word++;
		}
		cont_str++;
	}
	return (num_word);
}

int	ft_len_word(char *str, int cont_str)
{
	int	len;

	len = 0;
	while (str[cont_str] != ' ' && str[cont_str] != '\n'
		&& str[cont_str] != '\t' && str[cont_str])
	{
		len++;
		cont_str++;
	}
	return (len);
}

void	ft_fill_mat(char **split_mat, char *str, int *cont_str, int *num_word)
{
	int	len_word;

	len_word = 0;
	while (str[*cont_str] != ' ' && str[*cont_str] != '\n'
		&& str[*cont_str] != '\t' && str[*cont_str])
	{
		split_mat[*num_word][len_word] = str[*cont_str];
		len_word++;
		*cont_str = *cont_str + 1;
	}
}

char	**ft_split(char *str)
{
	char	**split_mat;
	int		num_word;
	int		cont_str;
	int		len_word;

	num_word = ft_count_word(str) + 1;
	split_mat = (char **)malloc(sizeof(char *) * num_word);
	cont_str = 0;
	num_word = 0;
	while (str[cont_str])
	{
		if (str[cont_str] != ' ' && str[cont_str] != '\n'
			&& str[cont_str] != '\t')
		{
			len_word = ft_len_word(str, cont_str);
			split_mat[num_word] = (char *)malloc(sizeof(char) * len_word);
			ft_fill_mat(split_mat, str, &cont_str, &num_word);
			split_mat[num_word][len_word] = '\0';
			num_word++;
		}
		cont_str++;
	}
	split_mat[num_word] = 0;
	return (split_mat);
}

int main()
{
	char	*str = "1 12 123 1234 12345 123456 1234567 12345678 1 12345678 1234567 			123456 12345 1234 123 12 1";
	char	**mat = ft_split(str);
	int	i;
	
	i = 0;
	while (mat[i] != 0)
	{
		printf("%s\n", mat[i]);
		i++;
	}
	free(mat);
	return 0;
}
