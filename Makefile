##
## EPITECH CHALLENGE, 2023
## general makefile
##

SRC	=	$(shell find . -name "*.c" ! -path "*test*.c")
OBJ	=	$(SRC:.c=.o)
COV	=	$(SRC:.c=.gcda) $(SRC:.c=.gcno)

NAME	=	$(shell basename $(shell pwd))

TESTNAME=	TEST
TESTFILE=	tests.c

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -c $(SRC) -g3
	@echo "Library compiled successfully"

clean:
	@rm -f $(OBJ)
	@echo "Cleaned .o"

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned '$(NAME)'"
	@rm -f $(TESTNAME) $(COV)
	@echo "Cleaned '$(TESTNAME)' binary & residual files"

re:	fclean all

test:
	@gcc -fprofile-arcs -ftest-coverage -o $(TESTNAME) $(TESTFILE) $(SRC) -g3 -lcriterion

run:	test
	@./$(TESTNAME)

.PHONY: all clean fclean re test run
