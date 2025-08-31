/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 11:43:46 by alaigo            #+#    #+#             */
/*   Updated: 2025/08/24 19:34:58 by alaigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_dict_error(void)
{
	write(1, "Dict Error\n", 11);
}

int	main(int argc, char *argv[])
{
	char	**dictionary;
	char	**numbers_digi;
	char	**numbers_name;
	int		i;

	i = 0;
	if (argc < 2 || argc > 3)
		return (ft_error(), 1);
	if (ft_input_is_valid(argv[1]))
		return (ft_error(), 1);
	dictionary = get_dictionary();
	if (!dictionary)
		return (0);
	while (dictionary[i])
	{
		if (!dict_is_valid(dictionary[i]))
			return (ft_dict_error(), 1);
		i++;
	}
	numbers_digi = get_numbers_digi(dictionary, i);
	numbers_name = get_numbers_name(dictionary, i);
	free(dictionary);
	free(numbers_digi);
	free(numbers_name);
	return (0);
}
