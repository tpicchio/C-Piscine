/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:31:39 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/19 10:31:44 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i] && s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] != s2[i] && s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
