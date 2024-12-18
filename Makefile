RED    = $(shell printf "\33[31m")
GREEN  = $(shell printf "\33[32m")
WHITE  = $(shell printf "\33[37m")
YELLOW = $(shell printf "\33[33m")
RESET  = $(shell printf "\33[0m")
BLUE = $(shell printf "\33[34m")
PURPLE = $(shell printf "\33[35m")
TITLE = $(shell printf "\33[32;40m")

NAME = .a
FLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_printf_extension.c ft_printf_hexa.c ft_printf_pointeur.c
OBJS = $(SRCS:.c=.o)
LIBFT = ./libft/libft.a

all: $(NAME) libft 

$(NAME): $(LIBFT) $(OBJS)
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJS)

.c.o:
	@cc $(FLAGS) -c $< -o $@

$(LIBFT):
	@make --silent -C ./libft
	@echo "$(GREEN)Bibliotheque compile avec succes$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@make --silent -C ./libft fclean
	@echo "$(PURPLE)Fichiers objets correctement supprimes$(RESET)"

clean:
	@rm -rf *.o
	@rm -rf ./srcs/*.o
	@make --silent -C ./libft clean
	@echo "$(PURPLE)Bibliotheque correctement supprimes$(RESET)"

re: fclean all