srcs = ft_putnbr.c
bonus = ft_putstr.c

OBJ_FILES = ${OBJ_PATH:.c=.o}
BONUS_FILES = ${BONUS_PATH:.c=.o}

OBJ_PATH = ${addprefix ${PRE}, ${srcs}}
BONUS_PATH = ${addprefix ${BON}, ${bonus}}

BON = ./bonus/
PRE = ./srcs/

HEADER = ./includes/

NAME = libft.a

AR = ar rc

RAN = ranlib

RM = rm -f

GCC = gcc

CFLAGS = -Wall -Wextra -Werror

.PHONY: all .c.o clean fclean re bonus

all: ${NAME}

.c.o:

	${GCC} ${CFLAGS} -c -I ${HEADER} $< -o ${<:.c=.o}

${NAME}:	${OBJ_FILES}
			${AR} ${NAME} ${OBJ_FILES}
			${RAN} ${NAME}

clean:
			rm -f ${OBJ_FILES}
			rm -f ${BONUS_FILES}

fclean:	clean
			rm -f ${NAME}

re:		fclean all

bonus:		${BONUS_FILES}
			${AR} ${NAME} ${BONUS_PATH}