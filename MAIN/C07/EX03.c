/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:34:37 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/29 10:34:38 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char *argv[])
{
	char *str;
	
	str = ft_strjoin(argc, argv, argv[1]);
	printf("%s\n", str);
	return 0;
}
