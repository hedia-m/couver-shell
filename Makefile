##
## Makefile for  in /home/buffat_b/couver-shell
## 
## Made by 
## Login   <buffat_b@epitech.net>
## 
## Started on  Wed May 25 00:12:22 2016 
## Last update Wed May 25 12:40:18 2016 vincent riamon
##

NAME	=	42sh

SRC	=	src/main.c \
		src/prompt/init_prompt.c \
		src/prompt/prompt.c \
		src/prompt/cursor.c \
		src/prompt/edit_buffer.c \
		src/prompt/set_term.c \
		src/prompt/annex.c \
		src/minishell1/misc.c \
		src/minishell1/builtin.c \
		src/minishell1/builtin2.c \
		src/minishell1/builtin3.c \
		src/minishell1/utils.c \
		src/minishell1/tab_ptn_fct.c \
		src/minishell1/my_str_to_wordtab_pattern.c \
		src/minishell1/cd.c \
		src/minishell1/exec_sh1.c \
		src/minishell2/minishell2.c \
		src/minishell2/pars.c \
		src/minishell2/pipe.c \
		src/minishell2/redirections.c \
		src/minishell2/verif_return.c \
		src/minishell2/verifs.c \
		src/history/history_gestion.c \
		src/history/get_next_line.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include/

CC	=	gcc -Wall -Wextra # -Werror -pedantic


all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) -lncurses

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all

aa:	all	clean
	`clean`
