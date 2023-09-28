##
## EPITECH POOL CHALLENGE, 2023
## general makefile
##

SRC	=	$(shell find . -name "*.c" ! -path "*test*.c")
OBJ	=	$(SRC:.c=.o)
COV	=	$(SRC:.c=.gcda) $(SRC:.c=.gcno)

NAME	=	superlib.a

TESTNAME=	SUPERtest.bin
TESTFILE=	supertests.c
CRITERIONPATH=	../../criterion/

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
	@gcc -fprofile-arcs -ftest-coverage -o $(TESTNAME) $(TESTFILE) $(SRC) -g3 -I$(CRITERIONPATH)include -L$(CRITERIONPATH)lib -lcriterion -lm

run:	test
	@./$(TESTNAME) --verbose

runc: test
	@gcovr --exclude */tests.c --exclude-unreachable-branches --sort-percentage --print-summary

norm:
	@ruby normono.rb

.PHONY: all clean fclean re test run runc norm
