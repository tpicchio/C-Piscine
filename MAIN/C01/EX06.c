/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:47:12 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/15 13:48:07 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int main ()
{
	int len;
	char str[10] = "0123456789";
	
	len = ft_strlen(str);
	printf("%d",len);
	return 0;
}
