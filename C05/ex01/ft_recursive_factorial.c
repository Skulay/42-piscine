/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:12:58 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/19 18:38:58 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
	{
		return (res);
	}
	return (res = nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int main()
{
	printf("result -> %d\n", ft_recursive_factorial(5));
	return (0);
}*/