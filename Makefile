SRCS = big_sort.c  big_sort_utils.c  fill_node.c  push_operations.c \
	push_swap.c  push_swap_utils2.c  push_swap_utils3.c  push_swap_utils.c  rotate_operations.c \
	rrotate_operation.c  sort_type_checker.c  sort_utils2.c  sort_utils.c  swap_operations.c

SRCS_B = actions2_bonus.c  actions4_bonus.c  checker_body_bonus.c  get_next_line_bonus.c  utils2_bonus.c  utils4_bonus.c \
		actions3_bonus.c  actions_bonus.c   checker_main_bonus.c  get_next_line_utils_bonus.c  utils3_bonus.c  utils_bonus.c

RM	= rm -f
CFLAGS = -Wall -Wextra -Werror
CC = cc
OBJF_B = $(SRCS_B:.c=.o)
OBJF = $(SRCS:.c=.o)
NAME = push_swap
NAME_B = checker

RESET		=	'\033[0m'
GREEN		=	'\033[32m'
GRAY		=	'\033[2;37m'
ITALIC		=	'\033[3m'

.c.o 	:
			@echo $(ITALIC)$(GREEN) "     - Compiling the file /$<..." $(RESET)
			@$(CC) $(CFLAGS) -c $< -o $@

all  :$(NAME)
bonus : $(NAME_B)

$(NAME) : $(OBJF)
			@echo $(ITALIC)$(GRAY) "     - creating the executable file $(NAME)..." $(RESET)
			@$(CC) $(CFLAGS) $(OBJF) -o $(NAME)

$(NAME_B) : $(OBJF_B)
			@echo $(ITALIC)$(GRAY) "     - creating the executable file $(NAME_B)..." $(RESET)
			@$(CC) $(CFLAGS) $(OBJF_B) -o $(NAME_B)
clean	: 
			@echo $(ITALIC)$(GRAY) "     - deleting the object files..." $(RESET)
			@$(RM) $(OBJF) $(OBJF_B)

fclean	: clean
			@echo $(ITALIC)$(GRAY) "     - deleting the executable files..." $(RESET)
			@$(RM) $(NAME) $(NAME_B)

re		: fclean all

.PHONY	: all clean fclean re bonus 
.SECONDARY:
