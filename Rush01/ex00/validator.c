/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:38:56 by tmarigna          #+#    #+#             */
/*   Updated: 2025/08/17 10:25:59 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	visible_left(int grid[4][4], int row);
int	visible_right(int grid[4][4], int row);
int	visible_top(int grid[4][4], int col);
int	visible_bottom(int grid[4][4], int col);

int	is_row_complete(int grid[4][4], int row)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (grid[row][col] == 0)
			return (0);
		col++;
	}
	return (1);
}

int	is_col_complete(int grid[4][4], int col)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (grid[row][col] == 0)
			return (0);
		row++;
	}
	return (1);
}

int	check_row_constraints(int grid[4][4], int row, int *constraints)
{
	if (!is_row_complete(grid, row))
		return (1);
	if (visible_left(grid, row) != constraints[8 + row])
		return (0);
	if (visible_right(grid, row) != constraints[12 + row])
		return (0);
	return (1);
}

int	check_col_constraints(int grid[4][4], int col, int *constraints)
{
	if (!is_col_complete(grid, col))
		return (1);
	if (visible_top(grid, col) != constraints[col])
		return (0);
	if (visible_bottom(grid, col) != constraints[4 + col])
		return (0);
	return (1);
}
