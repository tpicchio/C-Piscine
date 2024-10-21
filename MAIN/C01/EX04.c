/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:43:29 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/15 12:44:09 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a = 11;
	int b = 5;
	
	ft_ultimate_div_mod(&a,&b);
	printf("%d %d",a,b);
	
	return 0;
}
