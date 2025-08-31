/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:33:28 by tmarigna          #+#    #+#             */
/*   Updated: 2025/08/17 10:34:56 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	visible_left(int grid[4][4], int row)
{
	int	gc_count;
	int	max_height;
	int	col;

	col = 0;
	gc_count = 0;
	max_height = 0;
	while (col < 4)
	{
		if (grid[row][col] > max_height)
		{
			max_height = grid[row][col];
			gc_count++;
		}
		col++;
	}
	return (gc_count);
}

int	visible_right(int grid[4][4], int row)
{
	int	gc_count;
	int	max_height;
	int	col;

	col = 3;
	gc_count = 0;
	max_height = 0;
	while (col >= 0)
	{
		if (grid[row][col] > max_height)
		{
			max_height = grid[row][col];
			gc_count++;
		}
		col--;
	}
	return (gc_count);
}

int	visible_top(int grid[4][4], int col)
{
	int	gc_count;
	int	max_height;
	int	row;

	row = 0;
	gc_count = 0;
	max_height = 0;
	while (row < 4)
	{
		if (grid[row][col] > max_height)
		{
			max_height = grid[row][col];
			gc_count++;
		}
		row++;
	}
	return (gc_count);
}

int	visible_bottom(int grid[4][4], int col)
{
	int	gc_count;
	int	max_height;
	int	row;

	row = 3;
	gc_count = 0;
	max_height = 0;
	while (row >= 0)
	{
		if (grid[row][col] > max_height)
		{
			max_height = grid[row][col];
			gc_count++;
		}
		row--;
	}
	return (gc_count);
}
