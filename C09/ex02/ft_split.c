/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 11:29:05 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/25 17:38:54 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlencpy(char *dest, char *src, int len)
{
	int	i;

	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset))
			return (i);
		i++;
	}
	return (i);
}

int	ft_countword(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (is_sep(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_sep(str[i], charset))
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strs;
	int		len;
	int		pos;
	int		count;

	i = 0;
	pos = 0;
	count = ft_countword(str, charset);
	strs = (char **)malloc((count + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (i < count)
	{
		while (is_sep(str[pos], charset))
			pos++;
		len = ft_strlen(&str[pos], charset);
		strs[i] = (char *)malloc((len + 1) * sizeof(char));
		if (!strs[i])
			return (NULL);
		pos += ft_strlencpy(strs[i], &str[pos], len);
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
/*
#include <stdio.h>

int main()
{
	char    **strs;
	int     i;

	i = 0;
	strs = ft_split("test1 test2 test 3 test4 test5", " ");
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs[i]);
	free(strs);
	return (0);
}*/