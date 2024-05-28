# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 15:22:45 by bschneid          #+#    #+#              #
#    Updated: 2024/04/16 15:22:46 by bschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: ft_display_file

ft_display_file: ft_display_file.o
	cc -Wall -Wextra -Werror -o ft_display_file ft_display_file.o

ft_display_file.o: ft_display_file.c
	cc -Wall -Wextra -Werror -c ft_display_file.c

clean:
	rm -f *.o

fclean: clean
	rm -f ft_display_file
