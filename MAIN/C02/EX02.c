/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:44:47 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/16 10:44:49 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main()
{
	int res;
	char str[5] = {'a','b','c',' ','e'};
	res = ft_str_is_alpha(str);
	printf("%d",res);
	return 0;
}

