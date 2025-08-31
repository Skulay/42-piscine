/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:07:51 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/14 11:13:06 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!str[i] || !str[i + 1])
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

long int	ft_sign(int nbr)
{
	long int	nbr2;

	nbr2 = 0;
	nbr2 = nbr;
	if (nbr2 < 0)
	{
		nbr2 *= -1;
		ft_putchar('-');
	}
	return (nbr2);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb_base;
	long int	nbr2;

	nb_base = ft_strlen(base);
	if (!check_base(base))
		return ;
	nbr2 = ft_sign(nbr);
	if (nbr2 >= nb_base)
	{
		ft_putnbr_base(nbr2 / nb_base, base);
		ft_putnbr_base(nbr2 % nb_base, base);
	}
	else
		ft_putchar(base[nbr2 % nb_base]);
}
/*
#include <limits.h>

int	main()
{
	char	*str = "01";
	int		nbr = -85;

	ft_putnbr_base(nbr, str);
}*/