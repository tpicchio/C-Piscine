/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:16:12 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/16 14:16:16 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

int main()
{
	char str[5] = {'C','I','a','o','!'};
	*str = *ft_strlowcase(str);
	printf("%s",str);
	return 0;
}
