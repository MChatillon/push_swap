
SRCS		=	$(SRCS_DIR)/main.c\
				$(SRCS_DIR)/exit_prog.c\
				$(SRCS_DIR)/parse.c\
				$(SRCS_DIR)/push.c\
				$(SRCS_DIR)/rotate.c\
				$(SRCS_DIR)/rev_rotate.c\
				$(SRCS_DIR)/swap.c\
				$(SRCS_DIR)/utils.c\
				$(SRCS_DIR)/algorythm.c\
				$(SRCS_DIR)/radix.c\

SRCS_DIR	= srcs

OBJS		= $(subst $(SRCS_DIR), $(OBJS_DIR), $(SRCS:.c=.o))

OBJS_DIR	= objs

LIBFT		= libft/libft.a
FT_PRINTF	= ft_printf/libftprintf.a
CC			= gcc
CFLAGS		= -g -Wall -Werror -Wextra -fsanitize=address
RM			= rm -fr
NAME		= push_swap

all: $(NAME)

$(LIBFT):
	make bonus -C libft

$(FT_PRINTF):
	make -C ft_printf

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(LIBFT) $(FT_PRINTF) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -Llibft -lft -Lft_printf -lftprintf -o $(NAME)

clean:
			$(RM)	$(OBJS)
			make clean -C libft
			make clean -C ft_printf

fclean:	clean
			$(RM)	$(NAME) $(OBJS_DIR)
			make fclean -C libft
			make fclean -C ft_printf

re:	fclean all

.PHONY: fclean all re clean