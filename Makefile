CC = cc

CFLAGS = -Wall -Wextra -Werror -g

BUILD_DIR = build/

OBJ= $(subst $(SRC_DIR),$(BUILD_DIR),$(SRCS:.c=.o))

SRC_DIR = src/

SRCS = \
	$(SRC_DIR)ft_isalpha.c \
	$(SRC_DIR)ft_isdigit.c \
	$(SRC_DIR)ft_isalnum.c \
	$(SRC_DIR)ft_isascii.c \
	$(SRC_DIR)ft_strlen.c \
	$(SRC_DIR)ft_isprint.c

INCLUDE = -Iinclude

NAME = libft.a

all: $(NAME)

$(BUILD_DIR):
	@mkdir -p $@

$(NAME): $(BUILD_DIR) $(OBJ)
	ar rc $(NAME) $(OBJ)
$(BUILD_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $(INCLUDE) $^ -o $@ -c

fclean: clean
	rm -f $(NAME)

clean:
	@if [ -d "build" ]; then rm -rf build; fi;

re: fclean $(NAME)
.SILENT:
.PHONY: all clean fclean re