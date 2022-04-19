NAME = bsq
SRCS = main.c
OBJS = ${SRCS.c=.0}
FLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f

.c.o:	${cc} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} 
	${CC} -o ${NAME} ${OBJS}

all: ${NAME} 

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re -Wall -Wextra -Werror
