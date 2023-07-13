SRCS		= main.cpp\
				ClapTrap.cpp\
				FragTrap.cpp\
				ScavTrap.cpp\
				DiamondTrap.cpp
INCS		= ClapTrap.hpp\
				FragTrap.hpp\
				ScavTrap.hpp\
				DiamondTrap.hpp
OBJS		= ${SRCS:.cpp=.o}
NAME		= test
CXX			= c++
CXXFLAGS		= -Wall -Wextra -Werror -Wshadow -std=c++98 -fsanitize=address

$(NAME):	${OBJS} ${INCS}
			${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all