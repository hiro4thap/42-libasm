SRCS = ft_strlen.s \
		ft_strcpy.s

OBJS = $(SRCS:.s=.o)

NASM = nasm

AR = ar rcs

FMT = elf64

NAME = libasm.a

RM  = rm -f

all:$(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o:%.s
	$(NASM) -f $(FMT) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
