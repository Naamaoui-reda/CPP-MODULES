# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 22:11:07 by rnaamaou          #+#    #+#              #
#    Updated: 2022/12/06 22:11:54 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Open
SRC				= main.cpp ClapTrap.cpp 
OBJ				= $(SRC:.cpp=.o)	

CC				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 
RM				= rm -f

all:	$(NAME)

$(NAME):		$(OBJ) ClapTrap.hpp
				$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean:
				$(RM) $(OBJ)  
fclean:			clean
				$(RM) $(NAME)

re:				fclean all