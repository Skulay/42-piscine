/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:40:08 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/14 15:19:35 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	n;
	int	find;

	i = 0;
	j = 0;
	n = ft_strlen(to_find);
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		find = 0;
		if (str[i] == to_find[find])
		{
			j = i;
			while (str[j++] == to_find[find++])
				if (find == n)
					return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "bonjour a toi et tous et a toi";
	char str1[] = "";

	printf("chaine trouver -> %s", ft_strstr(str, str1));
	return 0;
}*/