/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:37:12 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/22 15:37:13 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fatt;

	fatt = 1;
	while (nb > 0)
	{
		fatt = fatt * nb;
		nb--;
	}
	if (nb < 0)
		fatt = 0;
	return (fatt);
}
