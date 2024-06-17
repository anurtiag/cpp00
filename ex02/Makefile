# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 09:50:01 by anurtiag          #+#    #+#              #
#    Updated: 2024/06/17 15:33:01 by anurtiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	account


SRCS			=	tests.cpp Account.cpp


OBJ				=	$(SRCS:.cpp=.o)


CC				=	c++


CFLAGS			=	-Wall -Wextra -Werror -std=c++98


RM				=	rm -rf


all:			$(NAME)

$(NAME):		$(OBJ)
				@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)



clean:
				@$(RM) $(OBJ)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re