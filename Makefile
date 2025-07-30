NAME=bsq
CC=cc
CFLAGS=-Wall -Werror -Wextra
SRCS=main.c ft_check_map ft_extract_legend ft_utils
OBJS=$(SRCS:.c=.o)
EXE=hello

all: $(NAME)

$(NAME): $(OBJS)
        $(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all