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

int	ft_str_is_printable(char *str);

int main()
{
	int res;
	char str[5] = {'=','F','v',' ','~'};
	res = ft_str_is_printable(str);
	printf("%d",res);
	return 0;
}
