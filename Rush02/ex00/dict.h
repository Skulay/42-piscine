/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:27:12 by alehamad          #+#    #+#             */
/*   Updated: 2025/08/24 19:19:15 by alaigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# define DICTIO "numbers.dict"

char	**get_numbers_digi(char **dictionary, int dictio_len);
char	**get_numbers_name(char **dictionary, int dictio_len);
char	**ft_split(char *str, char *charset);
char	**get_dictionary(void);
int		ft_input_is_valid(char *str);
int		dict_is_valid(char *str);

#endif
