/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:23:48 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/16 12:23:53 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main()
{
	int res;
	char str[5] = {'S','F','v','E','A'};
	res = ft_str_is_uppercase(str);
	printf("%d",res);
	return 0;
}
