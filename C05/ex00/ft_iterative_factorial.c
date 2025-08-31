/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:59:34 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/19 18:38:05 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	result;

	result = 1;
	count = 1;
	if (nb < 0)
		return (0);
	while (count < nb)
	{
		result += count * result;
		count++;
	}
	return (result);
}
/*
#include <stdio.h>

int main()
{
	printf("result -> %d\n", ft_iterative_factorial(5));
	return (0);
}*/