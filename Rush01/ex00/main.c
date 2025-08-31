/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 10:45:55 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/17 10:34:28 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		parse_input(char *str, int *constraints);
int		solve_puzzle(int grid[4][4], int *constraints);
void	print_grid(int grid[4][4]);

void	init_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	constraints[16];

	init_grid(grid);
	if (argc != 2 || !parse_input(argv[1], constraints))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (solve_puzzle(grid, constraints))
		print_grid(grid);
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
}
