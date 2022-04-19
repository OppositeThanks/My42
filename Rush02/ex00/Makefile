NAME = rush-02
SRCS = ft_aux.c gen_dic.c main.c ft_inputscheck.c
OBJS = ${SRCS:.c=.o}
FLAGS = -Wall -Wextra -Werror
CC = cc 
RM = rm -f 

.c.o:  
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:${OBJS}
	${CC} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re -Wall -Wextra -Werror