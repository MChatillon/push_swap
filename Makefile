SRCS		=	srcs/main.c \
				srcs/push.c \
				srcs/swap.c \
				srcs/rotate.c \
				srcs/rev_rotate.c \

OBJS		= $(subst srcs/, $(PATH_OBJS), $(SRCS.c=.o))

PATH_OBJS	= objs/

FT_PRINTF	=	ft_printf/libftprintf.a
LIBFT 		=	libft/libft.a
CC			=	gcc
RM 			=	rm -rf
CFLAGS 		=	-g -Wall -Werror -Wextra -fsanitize=address

NAME		=	push_swap

all			=	$(NAME)

$(LIBFT):
				make -C libft

$(FT_PRINTF):
				make -C ft_printf

$(PATH_OBJS)%.o: srcs/%.c
		mkdir -p $(@D)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) $(NAME)

clean:			$(RM) $(PATH_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re