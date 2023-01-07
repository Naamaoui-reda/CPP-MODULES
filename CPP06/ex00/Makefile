# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 21:38:03 by rnaamaou          #+#    #+#              #
#    Updated: 2023/01/06 21:38:04 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.cpp convert.cpp
OBJ		=	$(SRC:.cpp=.o)
CC		=	c++
FLEAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	con
HEADERS	=	convert.hpp
RM		=	rm -rf

all 	:	$(NAME)

$(NAME) :	$(OBJ) $(HEADERS)
			$(CC) $(FLEAGS) -o $(NAME) $(OBJ)
			
%.o		:	%.cpp $(HEADERS)
			$(CC) $(FLEAGS) -c $< -o $@
clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re