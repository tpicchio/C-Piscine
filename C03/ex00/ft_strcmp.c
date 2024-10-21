/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:41:48 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/19 09:41:49 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i] && s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] != s2[i] && s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
