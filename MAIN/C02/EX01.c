/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:35:45 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/16 10:35:47 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main (void)
{
	char dest[45];
	char src[9] = {"sambucone"};
	
	*dest = *ft_strncpy(dest,src,45);
	printf("%s",dest);
	return 0;
}
