/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:31:49 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/19 10:31:50 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_atoi(char *argv[])
{
	int num = 0;
	int i = 0;
	
	if (argv[3][0] == '-')
		i = 1;
	while (argv[3][i])
	{
		num = num * 10 + (argv[3][i] - 48);
		i++;
	}
	return num;
}

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char *argv[])
{
	int num;
	int res1;
	
	num = ft_atoi(argv);
	res1 = ft_strncmp(argv[1], argv[2], num);
	printf("Res1: %d\n",res1);
	argc += 0;
	return 0;
}
