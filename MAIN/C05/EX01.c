/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:17:01 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/22 16:17:02 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main()
{
	int res;

	res = ft_recursive_factorial(6);
	printf("%d\n",res);
	return 0;
}
