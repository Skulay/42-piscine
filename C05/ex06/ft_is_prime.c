/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:23:29 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/19 10:51:14 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count > 2)
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>

int main()
{
	printf("value -> %d", ft_is_prime(2147483646));
	return (0);
}*/