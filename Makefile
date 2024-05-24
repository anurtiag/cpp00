# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 11:45:12 by anurtiag          #+#    #+#              #
#    Updated: 2024/05/24 12:09:13 by anurtiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	cpp


SRCS			=	hello.cpp


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