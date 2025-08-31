/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:19:39 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/06 13:21:18 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int a;
	int b;
	int div = 0;
	int mod = 0;

	a = 54;
	b = 10;

	ft_div_mod(a, b, &div, &mod);
	printf("Div -> %d -- Mod -> %d", div, mod);
}*/