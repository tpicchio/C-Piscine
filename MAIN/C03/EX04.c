/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:32:09 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/22 10:32:10 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char *str = "abcdefgh";
	char *to_find = "def";
	char *res = ft_strstr(str, to_find);

	//*res = *ft_strstr(str, to_find);
	//*res = *strstr(str, to_find);
	printf("%s\n", res);
	return 0;
}
