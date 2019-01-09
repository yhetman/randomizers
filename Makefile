NAME = Generator

FILE = randomizer.cpp histogram.cpp main.cpp

HEADER = header.h

all: $(NAME)

$(NAME):
	g++ -o $(NAME) $(FILE) 
	g++ -w $(HEADER)

clean: 
	rm -f header.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean all
