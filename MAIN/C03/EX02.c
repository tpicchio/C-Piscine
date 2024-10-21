/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:44:35 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/22 09:44:36 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(int argc, char* argv[])
{
	char dest1[20] = "abcd";
	
	*dest1 = *ft_strcat(dest1, argv[1]);
	
	printf("Dest1: %s\n",dest1);
	argc += 0;
	return 0;
}
