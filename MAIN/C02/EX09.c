/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:26:14 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/16 14:26:15 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int main()
{
	char str[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	//strcpy(str, " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	*str = *ft_strcapitalize(str);
	printf("%s",str);
	return 0;
}

