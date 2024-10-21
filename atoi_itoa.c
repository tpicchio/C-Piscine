/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:20:30 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/18 10:20:31 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *argv[])
{
	int num;
	int i;

	num = 0;
	i = 0;
	if (argv[1][0] == '-')
		i = 1;
		
	while(argv[1][i] && argv[1][i] >= '0' && argv[1][i] <= '9')
	{
		num = num * 10 + (argv[1][i] - 48);
		i++;
	}
	if (argv[1][0] == '-')
		num = -num;
	return num;
}

char	*ft_itoa(int num, char *str)
{
	int i = 0;
	int tmp = num;
	int size = -1;
	
	while(tmp > 0)
	{
		tmp = tmp / 10;
		size++;
	}
	
	while(num > 0)
	{
		str[size - i] = (num % 10) + '0';
		i++;
		num = num / 10;
	}
	str[i] = '\0';
	return str;
}

int main(int argc, char *argv[])
{
	int	num;
	int	num1;
	char	str[10];
	num1 = ft_atoi(argv);
	num = atoi("--4556sdf");
	//*str = *ft_itoa(num, str);
	printf("Num: %d, Num1: %d",num,num1);
	return 0;
}
