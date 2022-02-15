# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 08:33:21 by tbillon           #+#    #+#              #
#    Updated: 2022/02/15 09:03:49 by tbillon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREY        =   \033[30m
RED         =   \033[31m
GREEN       =   \033[32m
YELLOW      =   \033[33m
BLUE        =   \033[34m
PINK        =   \033[35m
CYAN        =   \033[36m
WHITE       =   \033[37m
BOLD        =   \033[1m
UNDER       =   \033[4m
SUR         =   \033[7m
END         =   \033[0m

NAME = Array

RM	= rm -rf

CC = clang++ -std=c++98

FLAGS = -Wall -Werror -Wextra

SRCS = main.cpp

INCS = Array.hpp

OBJS = $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

%.o:%.cpp	$(INCS)
			$(CC) $(FLAGS) -c $< -o $@

clean:
		@$(RM) *.o
		@printf "$(ERASE)$(RED)-> All files *.o cleaned$(END)\n"

fclean:	clean
		@$(RM) Array
		@printf "$(ERASE)$(RED)-> Executable cleaned$(END)\n"

re: fclean all