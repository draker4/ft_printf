.PHONY:	all clean fclean re bonus output clean_output

# ******** VARIABLES ******** #

# ---- Final Executable --- #

NAME		=	libftprintf.a

COMP_NAME	= 	output

# ---- Directories ---- #

DIR_OBJS	=	.objs/

DIR_SRCS	=	srcs/

DIR_HEAD	=	head/

# ---- Files ---- #

HEAD		=	libftprintf.h 

SRCS_OUTPUT	=	main.c

SRCS		=	ft_putchar.c	ft_printf.c			\
				ft_itoa.c		ft_putstr.c			\
				ft_strdup.c		ft_strlen.c			\
				ft_conv.c		ft_int.c			\
				ft_char.c		ft_str.c			\
				ft_pointer.c	ft_putnbr_base.c	\

OBJS		=	${SRCS:%.c=${DIR_OBJS}%.o}

OBJS_OUTPUT	=	${SRCS_OUTPUT:%.c=${DIR_OBJS}%.o}

# ---- Compilation ---- #

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

# ---- Commands ---- #

RM		=	rm -rf
MKDIR	=	mkdir -p
AR		=	ar rc

# ********* RULES ******** #

all			:	${NAME}

# ---- Variables Rules ---- #

${NAME}			:	${OBJS} Makefile ${addprefix ${DIR_HEAD}, ${HEAD}}
					${AR} ${NAME} ${OBJS}

${COMP_NAME}	:	${OBJS} ${OBJS_OUTPUT} Makefile ${addprefix ${DIR_HEAD}, ${HEAD}}
					${CC} ${CFLAGS} -I ${DIR_HEAD} ${OBJS} ${OBJS_OUTPUT} -o ${COMP_NAME}

# ---- Compiled Rules ---- #

${OBJS}			:	| ${DIR_OBJS}

${OBJS_OUTPUT}	:	| ${DIR_OBJS}

${DIR_OBJS}%.o	:	${DIR_SRCS}%.c ${addprefix ${DIR_HEAD}, ${HEAD}} Makefile
					${CC} ${CFLAGS} -I ${DIR_HEAD} -c $< -o $@

${DIR_OBJS}		:
					${MKDIR} ${DIR_OBJS}

# ---- Usual Commands ---- #

clean			:
					${RM} ${DIR_OBJS}

fclean			:	clean
					${RM} ${NAME}

clean_output	:	clean
					${RM} ${DIR_OBJS} output

re				:	fclean all
