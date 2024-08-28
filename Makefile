NAME = libftprintf.a

SOURCES = ft_putchar.c ft_strlen.c ft_putstr.c \
		ft_itoa.c ft_itoahexa.c ft_puthexa.c \
		ft_itoa.c ft_itoahexa.c ft_puthexa.c \
		ft_putnbr.c ft_putnbr_unsigned.c ft_putnbrhexa.c \
		ft_putptr.c \
		ft_toconvert.c   ft_printf.c  

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):$(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME) ./a.out

re: fclean all

.PHONY: all clean fclean re