/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:02:57 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/16 11:02:59 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main()
{
	int res;
	char str[5] = {'0','7','3','0','1'};
	res = ft_str_is_numeric(str);
	printf("%d",res);
	return 0;
}
