# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/27 10:01:41 by anurtiag          #+#    #+#              #
#    Updated: 2024/05/27 10:02:10 by anurtiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook


SRCS			=	phonebook.cpp


OBJ				=	$(SRCS:.cpp=.o)


CC				=	c++

CFLAGS			=	-Wall -Wextra -Werror -std=c++98

RM				=	rm -rf



all:			$(NAME)

$(NAME):		$(OBJ)
				@$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)

clean:
				@$(RM) $(OBJ)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re