/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:31:03 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/15 09:10:38 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb(char comb[3])
{
	ft_putchar(comb[0]);
	ft_putchar(comb[1]);
	ft_putchar(comb[2]);
	if (!(comb[0] == '7' && comb[1] == '8' && comb[2] == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	comb[3];

	comb[0] = '0';
	comb[1] = '1';
	comb[2] = '1';
	while (1)
	{
		while (++comb[2] <= '9')
			ft_putcomb(comb);
		if (++comb[1] <= '8')
			comb[2] = comb[1];
		else if (++comb[0] <= '7')
		{
			comb[1] = comb[0] + 1;
			comb[2] = comb[1];
		}
		else
			break ;
	}
}
