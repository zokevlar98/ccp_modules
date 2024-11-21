NAME = megaphone

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf 

SRCS =	megaphone.cpp


all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean :
	$(RM) $(NAME)

fclean : clean
	$(RM) $(NAME)

re : all fclean

.PHONY : clean