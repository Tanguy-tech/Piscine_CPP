# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/04 14:05:21 by tbillon           #+#    #+#              #
#    Updated: 2022/02/09 10:13:16 by tbillon          ###   ########.fr        #
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

NAME = Materia

RM	= rm -rf

CC = clang++ -std=c++98

FLAGS = -Wall -Werror -Wextra

SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

INCS = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

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
		@$(RM) Materia
		@printf "$(ERASE)$(RED)-> Executable cleaned$(END)\n"

re: fclean all