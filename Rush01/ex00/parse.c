/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:33:37 by tmarigna          #+#    #+#             */
/*   Updated: 2025/08/17 12:02:40 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_digit(char c)
{
	return (c >= '1' && c <= '4');
}

int	is_space(char c)
{
	return (c == ' ');
}

int	parse_input(char *str, int *constraints)
{
	int	i;
	int	char_count;

	i = 0;
	char_count = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (is_digit(str[i]))
		{
			if (char_count >= 16)
				return (0);
			constraints[char_count] = str[i] - '0';
			char_count++;
			i++;
		}
		if (is_space(str[i]) && char_count < 16 && is_digit(str[i - 1]))
			i++;
		else if (!str[i])
			return (char_count == 16);
		else
			return (0);
	}
	return (char_count == 16);
}
