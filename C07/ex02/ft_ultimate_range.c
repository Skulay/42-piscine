/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:18:19 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/25 11:58:05 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int *)malloc((max - min) * sizeof(int));
	if (!tab)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (!range)
		return (-1);
	size = max - min;
	return (size);
}
/*
#include <stdio.h>

int main()
{
	int min = 10;
	int max = 20;
	int *tab[2];
	printf("value retour -> %d\n", ft_ultimate_range(tab, min, max));
	int i = 0;

	while (i < (max - min))
	{
		printf("%d", (*tab)[i]);
		i++;
	}
	free(*tab);
	return (0);
}*/