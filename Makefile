# Name of the executable
NAME = libft.a
# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
# Source files
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c
# Object files
OBJS = $(SRCS:.c=.o)
# Header file
HEADERS = libft.h
# Default rule to compile the program
all: $(NAME)
# Rule to link the object files into the executable
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
# Rule to compile the source files into object files
.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}
# Clean rule to remove object files
clean:
	rm -f $(OBJS)
# Fclean rule to remove object files and the executable
fclean: clean
	rm -f $(NAME)
# Rule to clean and recompile everything
re: fclean all
# Phony targets to prevent conflicts with files
.PHONY: all clean fclean re
