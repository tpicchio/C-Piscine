/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:34:22 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/16 11:34:24 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main()
{
	int res;
	char str[5] = {'a','x','g','j','A'};
	res = ft_str_is_lowercase(str);
	printf("%d",res);
	return 0;
}
