/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:09:06 by tmarigna          #+#    #+#             */
/*   Updated: 2025/08/17 10:34:18 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_constraints(int grid[4][4], int row, int *constraints);
int	check_col_constraints(int grid[4][4], int col, int *constraints);

int	find_empty_cell(int grid[4][4], int *row, int *col)
{
	*row = 0;
	while (*row < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (grid[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int	is_valid_row(int grid[4][4], int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (i != col && grid[row][i] == value)
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_col(int grid[4][4], int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (i != row && grid[i][col] == value)
			return (0);
		i++;
	}
	return (1);
}

int	solve_puzzle(int grid[4][4], int *constraints)
{
	int	row;
	int	col;
	int	value;

	if (!find_empty_cell(grid, &row, &col))
		return (1);
	value = 1;
	while (value <= 4)
	{
		if (is_valid_row(grid, row, col, value)
			&& is_valid_col(grid, row, col, value))
		{
			grid[row][col] = value;
			if (check_row_constraints(grid, row, constraints)
				&& check_col_constraints(grid, col, constraints)
				&& solve_puzzle(grid, constraints))
				return (1);
			grid[row][col] = 0;
		}
		value++;
	}
	return (0);
}
