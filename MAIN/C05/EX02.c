/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 09:52:54 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/23 09:52:56 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main()
{
	int res;
	
	res = ft_iterative_power(5, 3);
	printf("5 ^ 3 = %d\n", res);
	return 0;
}
