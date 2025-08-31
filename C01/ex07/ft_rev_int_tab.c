/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:20:29 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/08 12:51:21 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	tmp = 0;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}
/*
int main()
{
	int test[] = {9, 1, 2, 3, 4, 5};

	printf("avant -> %d %d %d %d %d %d\n", test[0], test[1], test[2],
	 test[3], test[4], test[5]);

	ft_rev_int_tab(test, 6);

	printf("apres -> %d %d %d %d %d %d\n", test[0], test[1], test[2],
	 test[3], test[4], test[5]);
	
	return (0);
}*/