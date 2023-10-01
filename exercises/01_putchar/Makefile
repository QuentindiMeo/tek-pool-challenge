##
## EPITECH POOL CHALLENGE, 2023
## putchar makefile
##

SRC	=	putchar.c

OBJ	=	$(SRC:.c=.o)
COV	=	./*.gcda ./*.gcno

NAME	=	putchar.bin
TESTNAME=	test.bin
TESTFILE=	tests.c
CRITOPATH=	../../criterion/

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
	@gcc -fprofile-arcs -ftest-coverage -w -o $(TESTNAME) $(TESTFILE) $(SRC) \
		-g3 -I$(CRITOPATH)include -L$(CRITOPATH)lib -lcriterion -lm

run:	fclean test
	@./$(TESTNAME) --verbose
runc:	run
	@gcovr --exclude tests.c --exclude-unreachable-branches --sort-uncovered --print-summary

.PHONY: all clean fclean re test run runc