/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:37:19 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/22 15:37:20 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main()
{
	int res;
	
	res = ft_iterative_factorial(6);
	printf("%d\n",res);
	return 0;	
}
