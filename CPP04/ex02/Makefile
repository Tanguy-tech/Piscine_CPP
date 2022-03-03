# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbillon <tbillon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 10:24:36 by tbillon           #+#    #+#              #
#    Updated: 2022/02/21 15:10:06 by tbillon          ###   ########.fr        #
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

NAME = AAnimal

RM	= rm -rf

CC = clang++ -std=c++98

FLAGS = -Wall -Werror -Wextra

SRCS = Brain.cpp AAnimal.cpp Cat.cpp Dog.cpp main.cpp

INCS = Bain.hpp AAnimal.hpp Cat.hpp Dog.hpp

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
		@$(RM) AAnimal
		@printf "$(ERASE)$(RED)-> Executable cleaned$(END)\n"

re: fclean all