/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:05:33 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/17 17:11:15 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (res += nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int main()
{
	printf("result -> %d", ft_recursive_power(5, 5));
	return (0);
}*/