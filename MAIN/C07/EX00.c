/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EX00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:23:19 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/24 14:23:32 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strdup(char *src);

int main()
{
	char src[20] = "kjahkjf";
	char *dest;
	
	dest = ft_strdup(src);
	printf("%s",dest);
	return 0;
}
