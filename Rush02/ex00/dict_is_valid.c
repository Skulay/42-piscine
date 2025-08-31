/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_is_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 14:05:28 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/24 17:18:36 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if ((str[i] == ' ' || str[i] == ':')
				&& (str[i - 1] >= '0' && str[i - 1] <= '9'))
				break ;
			return (0);
		}
		i++;
	}
	return (i);
}

int	ft_strlen2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	dict_is_valid(char *str)
{
	int	pos;
	int	size;

	pos = 0;
	size = ft_strlen2(str);
	while (str[pos])
	{
		if (!(ft_str_is_numeric(&str[pos])))
			return (0);
		pos += ft_str_is_numeric(&str[pos]);
		while (str[pos] == ' ')
			pos++;
		if (str[pos] != ':')
			return (0);
		pos++;
		while (str[pos] == ' ')
			pos++;
		while (str[pos] >= ' ' && str[pos] <= '~')
			pos++;
		if (pos != size)
			return (0);
	}
	return (1);
}
