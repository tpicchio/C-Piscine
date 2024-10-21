/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:32:51 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/23 10:32:52 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main()
{
	int	res;
	
	res = ft_recursive_power(5, 3);
	printf("%d\n",res);
	return 0;
}
