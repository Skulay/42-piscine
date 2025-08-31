# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ragolden <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/23 13:56:23 by ragolden          #+#    #+#              #
#    Updated: 2025/08/24 18:23:12 by alaigo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= rush-02

CC	= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= main.c dict_is_valid.c get_entries.c ft_split.c input_is_valid.c read_dictionary.c 
OBJS	= $(SRCS:.c=.o)

HEADERS	= dict.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
