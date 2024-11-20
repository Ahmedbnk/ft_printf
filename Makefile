NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS_MANDATORY =  

MANDATORY_OBJ = $(SRCS_MANDATORY:.c=.o)

.c.o :
	${CC} ${FLAGS} -c $<

all : $(NAME)
$(NAME): $(MANDATORY_OBJ)
	ar rcs $@ $^

clean :
	rm -f $(MANDATORY_OBJ)
fclean :clean
	rm -f $(NAME)
re : fclean all

.PHONY: all clean fclean re
