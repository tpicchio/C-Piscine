/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:13:45 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/17 14:13:46 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char	src[5] = {"abcd"};
	char	dest[20];
	unsigned int	size;
	
	size = strlcpy(dest, src, 2);
	printf("Dest: %s\n",dest);
	printf("Size: %d",size);
	return 0;
}

