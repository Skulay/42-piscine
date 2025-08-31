/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:15:25 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/07 14:08:53 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int main()
{
	int a;
	int b;

	a = 55;
	b = 99;

	printf("value avant : %d - %d\n", a, b);
	ft_swap(&a, &b);
	printf("value apres : %d - %d\n", a, b);
	return (0);
}*/