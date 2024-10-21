/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 09:52:47 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/23 09:52:48 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	tmp;

	tmp = nb;
	if (power < 0)
		nb = 0;
	if (power == 0)
		nb = 1;
	while (power > 1)
	{
		nb = tmp * nb;
		power--;
	}
	return (nb);
}
