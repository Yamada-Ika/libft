CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -c
NAME = libft.a
SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

ft_isalpha.o: ft_isalpha.c
	$(CC) $(CFLAGS) ft_isalpha.c -o ft_isalpha.o

ft_isdigit.o: ft_isdigit.c
	$(CC) $(CFLAGS) ft_isdigit.c -o ft_isdigit.o

ft_isalnum.o: ft_isalnum.c
	$(CC) $(CFLAGS) ft_isalnum.c -o ft_isalnum.o

ft_isascii.o: ft_isascii.c
	$(CC) $(CFLAGS) ft_isascii.c -o ft_isascii.o

ft_isprint.o: ft_isprint.c
	$(CC) $(CFLAGS) ft_isprint.c -o ft_isprint.o

ft_strlen.o: ft_strlen.c
	$(CC) $(CFLAGS) ft_strlen.c -o ft_strlen.o

ft_memset.o: ft_memset.c
	$(CC) $(CFLAGS) ft_memset.c -o ft_memset.o

ft_bzero.o: ft_bzero.c
	$(CC) $(CFLAGS) ft_bzero.c -o ft_bzero.o

ft_memcpy.o: ft_memcpy.c
	$(CC) $(CFLAGS) ft_memcpy.c -o ft_memcpy.o

ft_memmove.o: ft_memmove.c
	$(CC) $(CFLAGS) ft_memmove.c -o ft_memmove.o

ft_strlcpy.o: ft_strlcpy.c
	$(CC) $(CFLAGS) ft_strlcpy.c -o ft_strlcpy.o

ft_strlcat.o: ft_strlcat.c
	$(CC) $(CFLAGS) ft_strlcat.c -o ft_strlcat.o	

ft_toupper.o: ft_toupper.c
	$(CC) $(CFLAGS) ft_toupper.c -o ft_toupper.o

ft_tolower.o: ft_tolower.c
	$(CC) $(CFLAGS) ft_tolower.c -o ft_tolower.o

ft_strchr.o: ft_strchr.c
	$(CC) $(CFLAGS) ft_strchr.c -o ft_strchr.o

ft_strrchr.o: ft_strrchr.c
	$(CC) $(CFLAGS) ft_strrchr.c -o ft_strrchr.o

ft_strncmp.o: ft_strncmp.c
	$(CC) $(CFLAGS) ft_strncmp.c -o ft_strncmp.o

ft_memchr.o: ft_memchr.c
	$(CC) $(CFLAGS) ft_memchr.c -o ft_memchr.o

ft_memcmp.o: ft_memcmp.c
	$(CC) $(CFLAGS) ft_memcmp.c -o ft_memcmp.o

ft_strnstr.o: ft_strnstr.c
	$(CC) $(CFLAGS) ft_strnstr.c -o ft_strnstr.o

ft_atoi.o: ft_atoi.c
	$(CC) $(CFLAGS) ft_atoi.c -o ft_atoi.o

ft_calloc.o: ft_calloc.c
	$(CC) $(CFLAGS) ft_calloc.c -o ft_calloc.o

ft_strdup.o: ft_strdup.c
	$(CC) $(CFLAGS) ft_strdup.c -o ft_strdup.o

ft_substr.o: ft_substr.c
	$(CC) $(CFLAGS) ft_substr.c -o ft_substr.o

ft_strjoin.o: ft_strjoin.c
	$(CC) $(CFLAGS) ft_strjoin.c -o ft_strjoin.o

ft_strtrim.o: ft_strtrim.c
	$(CC) $(CFLAGS) ft_strtrim.c -o ft_strtrim.o

ft_split.o: ft_split.c
	$(CC) $(CFLAGS) ft_split.c -o ft_split.o

ft_itoa.o: ft_itoa.c
	$(CC) $(CFLAGS) ft_itoa.c -o ft_itoa.o

ft_strmapi.o: ft_strmapi.c
	$(CC) $(CFLAGS) ft_strmapi.c -o ft_strmapi.o

ft_striteri.o: ft_striteri.c
	$(CC) $(CFLAGS) ft_striteri.c -o ft_striteri.o

ft_putchar_fd.o: ft_putchar_fd.c
	$(CC) $(CFLAGS) ft_putchar_fd.c -o ft_putchar_fd.o

ft_putstr_fd.o: ft_putstr_fd.c
	$(CC) $(CFLAGS) ft_putstr_fd.c -o ft_putstr_fd.o

ft_putendl_fd.o: ft_putendl_fd.c
	$(CC) $(CFLAGS) ft_putendl_fd.c -o ft_putendl_fd.o

ft_putnbr_fd.o: ft_putnbr_fd.c
	$(CC) $(CFLAGS) ft_putnbr_fd.c -o ft_putnbr_fd.o

clean:
	rm -rf $(OBJFILE)

fclean: clean
	rm -rf $(NAME)

re: fclean all