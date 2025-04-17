NAME    = libftprintf.a
HEADER  = ft_printf.h
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror

SRC_NAMES = ft_is_valid_specifier.c ft_printf.c ft_putchar.c ft_putft.c \
            ft_puthexa.c ft_putint.c ft_putstr.c ft_putunsigned.c ft_putvoidhexa.c

OBJDIR  = objs
OBJS    = $(addprefix $(OBJDIR)/, $(SRC_NAMES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.c $(HEADER)
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJDIR)

re: fclean all

.PHONY: all clean fclean re
