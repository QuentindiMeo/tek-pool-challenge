##
## EPITECH POOL CHALLENGE, 2023
## putstr makefile
##

SRC	=	putstr.c
SIDE	=	../01_putchar/putchar.c

OBJ	=	$(SRC:.c=.o) $(SIDE:.c=.o)
COV	=	*.gcda *.gcno *.gcov

NAME	=	putstr.bin
TESTNAME=	test.bin
TESTFILE=	tests.c
CRITOPATH=	../../criterion/

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(SRC) $(SIDE) -g3
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
	@gcc -fprofile-arcs -ftest-coverage -w -o $(TESTNAME) $(TESTFILE) $(SRC) $(SIDE) \
		-g3 -I$(CRITOPATH)include -L$(CRITOPATH)lib -lcriterion -lm

run:	fclean test
	@./$(TESTNAME) --verbose
runc:	run
	@gcovr --exclude tests.c --exclude-unreachable-branches --sort-uncovered --print-summary

.PHONY: all clean fclean re test run runc