/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:07:25 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/22 10:07:26 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char dest[20] = "";
	char src[10] = "abc";
	
	*dest = *ft_strncat(dest, src, 5);
	
	printf("Dest: %s",dest);
	return 0;
}
