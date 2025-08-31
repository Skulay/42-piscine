/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:55:46 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/10 17:25:31 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
#include <stdio.h>

int main()
{
	int	test;
	int *ptr1;

	test = 99;
	ptr1 = &test;

	printf("value avant : %d\n", test);
	ft_ft(ptr1);
	printf("value apres : %d\n", test);
	return (0);
}