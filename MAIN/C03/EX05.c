/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:11:22 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/22 12:11:23 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char *str = "abcdef\0";
	char dest[20];
	unsigned int len;

	len = ft_strlcat(dest, str, 10);
	printf("%s %d\n", dest,len);
	return 0;
}
