##
## EPITECH POOL CHALLENGE, 2023
## strcpy makefile
##

SRC	=	strcpy.c

OBJ	=	$(SRC:.c=.o)
COV	=	$(SRC:.c=.gcda) $(SRC:.c=.gcno) $(TESTFILE:.c=.gcda) $(TESTFILE:.c=.gcno)

NAME	=	strcpy.bin
TESTNAME=	test.bin
TESTFILE=	tests.c
CRITERIONPATH=	../../criterion/

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(SRC) -g3
	@echo "$(NAME) compiled successfully"

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
runc:	run
	@gcovr --exclude tests.c --exclude-unreachable-branches --sort-uncovered --print-summary

.PHONY: all clean fclean re test run runc