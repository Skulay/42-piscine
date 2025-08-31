/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:36:22 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/12 14:36:19 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <string.h>
int main()
{
	char *src = "bonjour a tous";
	char dest[15];
	int n = 5;

	printf("dest = %s\n",ft_strncpy(dest, src, n));
	
	printf("dest = %s\n",strncpy(dest, src, n));
	return (0);
}*/