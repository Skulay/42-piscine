/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_entries.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 11:43:46 by alaigo            #+#    #+#             */
/*   Updated: 2025/08/24 19:30:42 by alaigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	*get_number_digi(char *entry)
{
	char	*return_value;
	int		size;
	int		i;

	size = 0;
	while (entry[size] >= '0' && entry[size] <= '9')
	{
		size ++;
	}
	return_value = (char *)malloc((size + 1) * sizeof(char));
	if (!return_value)
		return (NULL);
	i = 0;
	while (i < size)
	{
		return_value[i] = entry[i];
		i ++;
	}
	return_value[i] = '\0';
	return (return_value);
}

char	**get_numbers_digi(char **dictionary, int dictio_len)
{
	char	**numbers;
	int		i;

	numbers = (char **)malloc((dictio_len + 1) * sizeof(char));
	if (!numbers)
		return (NULL);
	i = 0;
	while (i < dictio_len)
	{
		numbers[i] = get_number_digi(dictionary[i]);
		i ++;
	}
	numbers[i] = "\0";
	return (numbers);
}

char	*get_number_name(char *entry)
{
	char	*return_value;
	int		start;
	int		size;
	int		i;

	start = 0;
	size = 0;
	while (entry[start] != ':')
		start ++;
	start ++;
	while (entry[start] == ' ')
		start ++;
	while (entry[start + size])
		size ++;
	return_value = (char *)malloc((size + 1) * sizeof(char));
	if (!return_value)
		return (NULL);
	i = 0;
	while (i < size)
	{
		return_value[i] = entry[start + i];
		i ++;
	}
	return_value[i] = '\0';
	return (return_value);
}

char	**get_numbers_name(char **dictionary, int dictio_len)
{
	char	**numbers;
	int		i;

	numbers = (char **)malloc((dictio_len + 1) * sizeof(char));
	if (!numbers)
		return (NULL);
	i = 0;
	while (i < dictio_len)
	{
		numbers[i] = get_number_name(dictionary[i]);
		i ++;
	}
	numbers[i] = "\0";
	return (numbers);
}
