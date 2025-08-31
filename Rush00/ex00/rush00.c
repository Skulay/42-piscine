/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:26:59 by ehesse            #+#    #+#             */
/*   Updated: 2025/08/10 20:24:04 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_first_last_line(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1 || col == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		if (col < 2147483647)
			col++;
	}
	ft_putchar('\n');
}

void	ft_print_middle_line(int x, int y)
{
	int	row;
	int	col;

	row = 2;
	col = 1;
	while (row < y)
	{
		while (col <= x)
		{
			if (col == 1 || col == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			if (col < 2147483647)
				col++;
		}
		row++;
		ft_putchar('\n');
		col = 1;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		return ;
	}
	if (x == 1 && y == 2)
	{
		ft_putchar('o');
		ft_putchar('\n');
		ft_putchar('o');
		ft_putchar('\n');
		return ;
	}
	if (y == 1)
	{
		ft_print_first_last_line(x);
		return ;
	}
	ft_print_first_last_line(x);
	ft_print_middle_line(x, y);
	ft_print_first_last_line(x);
}
