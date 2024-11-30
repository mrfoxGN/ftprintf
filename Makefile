SRCS = ft_printf.c ft_putadrss.c ft_putbasehex.c ft_putchar.c \
       ft_putnbr.c ft_putstr.c ft_unputnbr.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
RUN : 
	$(CC) $(CFLAGS) $(SRCS) main.c
	
re: fclean $(NAME)

.SECONDARY: $(OBJS)
.PHONY: all clean fclean re

