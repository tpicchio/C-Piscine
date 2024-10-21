/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:19:58 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/14 16:21:07 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	tmp;

	cont = 0;
	while (cont <= size / 2)
	{
		tmp = tab[cont];
		tab[cont] = tab[(size - 1) - cont];
		tab[(size - 1) - cont] = tmp;
		cont++;
	}
}
