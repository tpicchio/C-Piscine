/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:32:00 by tpicchio          #+#    #+#             */
/*   Updated: 2023/05/22 10:32:01 by tpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp_str;
	char	*tmp_find;

	tmp_find = to_find;
	if (*tmp_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *tmp_find)
		{
			tmp_str = str;
			while (1)
			{
				if (*tmp_find == '\0')
					return (str);
				if (*tmp_str != *tmp_find)
					break ;
				tmp_str++;
				tmp_find++;
			}
			tmp_find = to_find;
		}
		str++;
	}
	return (0);
}
