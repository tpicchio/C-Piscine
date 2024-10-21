/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:40:59 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/15 12:41:48 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a = 0;
	int b = 2;
	int div;
	int mod;
	
	ft_div_mod(a,b,&div,&mod);
	
	if(b == 0)
		printf("Errore dividendo nullo");
	else
		printf("%d / %d = %d con resto: %d",a,b,div,mod);
	
	return 0;
}
