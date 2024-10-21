/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:32:25 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/23 14:32:28 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int num)
{
	int	i;

	if (num <= 1)
		return (0);
	i = 2;
	while (i <= num / 2)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (is_prime(nb) == 1)
		return (nb);
	nb += 1;
	while (is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
