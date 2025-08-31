/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:22:32 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/08 12:54:36 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}
/*
int	main()
{
	int a;
	int b;

	a = 1000;
	b = 3;

	printf("a -> %d -- b -> %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a -> %d -- b -> %d", a, b);
}*/