/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:47:53 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/17 17:04:49 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- > 1)
	{
		res *= nb;
	}
	return (res);
}
/*
#include <stdio.h>

int main()
{
	printf("result -> %d", ft_iterative_power(5, 0));
	return (0);
}*/