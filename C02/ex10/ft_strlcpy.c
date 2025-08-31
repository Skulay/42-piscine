/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:29:11 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/12 14:35:22 by alehamad         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(src);
	if (size == 0)
	{
		return (j);
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char *src = "Bonjour a tous";
	char dest[20];
	
	printf("chaine -> %u", ft_strlcpy(dest, src, 5));

	printf("\nchaine -> %zu", strlcpy(dest, src, 5));
	
	return 0;
}*/