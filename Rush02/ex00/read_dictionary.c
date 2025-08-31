/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dictionary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 11:04:05 by alaigo            #+#    #+#             */
/*   Updated: 2025/08/24 17:17:01 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	**get_dictionary(void)
{
	int		file_d;
	int		buffer_len;
	char	*buffer;
	int		nb_read;
	char	**elements;

	buffer_len = 3000;
	buffer = (char *)malloc(buffer_len * sizeof(char));
	if (!buffer)
		return (NULL);
	file_d = open(DICTIO, O_RDONLY | O_EXCL);
	if (file_d < 0)
		return (NULL);
	nb_read = read(file_d, buffer, buffer_len - 1);
	if (nb_read < 0)
		return (0);
	buffer[nb_read] = '\0';
	elements = ft_split(buffer, "\n");
	file_d = close(file_d);
	if (file_d < 0)
		return (0);
	free(buffer);
	return (elements);
}
