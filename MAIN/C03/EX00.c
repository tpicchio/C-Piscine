/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:41:59 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/19 09:42:00 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main(int argc, char *argv[])
{
	int	i;
	
	i = ft_strcmp(argv[1], argv[2]);
	printf("Risultato: %d",i);
	argc += 0;
	return 0;
}
