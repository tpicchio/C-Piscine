/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:17:02 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/16 10:17:06 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main (void)
{
	char dest[5];
	char src[5] = {'a','b','c','d','e'};
	
	*dest = *ft_strcpy(dest,src);
	printf("%s",dest);
	return 0;
}
