/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:24:34 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/18 13:13:29 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while ((i * i) < nb)
	{
		i++;
		res = i * i;
	}
	if (res == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("value -> %d", ft_sqrt(0));
	return (0);
}*/