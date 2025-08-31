/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 11:58:18 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/21 13:50:26 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}

int	ft_len(char **strs, char *sep, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*join;
	int		pos;

	i = 0;
	pos = 0;
	len = ft_len(strs, sep, size);
	join = (char *)malloc((len + 1) * sizeof(char));
	if (!join)
		return (NULL);
	i = 0;
	while (i < size)
	{
		pos += ft_strcpy(&join[pos], strs[i]);
		if (i < size - 1)
			pos += ft_strcpy(&join[pos], sep);
		i++;
	}
	join[pos++] = '\0';
	return (join);
}
/*
#include <stdio.h>

int main()
{
	char *strss[] = {"Bonjour", "a", "tous", "et", "a", "toi"};
	char *sep = " - ";

	printf("chaine jointe -> %s", ft_strjoin(6, strss, sep));
	return (0);
}*/