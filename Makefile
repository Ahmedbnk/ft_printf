NAME = libftprintf.a

SRCS = ft_printf.c print_char.c print_number.c print_hexa.c \
       print_unsigned.c print_string.c print_pointer.c

OBJECT = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECT)
	$(AR) $(NAME) $(OBJECT)

clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean all
